/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:13 by shilal            #+#    #+#             */
/*   Updated: 2023/12/26 19:03:32 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// --------------------------------- Canonical form --------------------------------

BitcoinExchange::BitcoinExchange(): FileName(""), year(0), month(0), days(0){}

BitcoinExchange::BitcoinExchange(std::string str): FileName(str), year(0), month(0), days(0){
    ReadFileCsv();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& clap){
    *this = clap;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& clap){

    CscData = clap.CscData;
    line = clap.line;
    FileName = clap.FileName;
    year = clap.year;
    month = clap.month;
    days = clap.days;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(){
    file.close();
    data.close();
}

// -------------------------------- Members functions -------------------------------

void    BitcoinExchange::Error(std::string s){
    data.close();
    throw std::runtime_error(s);
}

bool    BitcoinExchange::Isnumber(std::string s)
{
    int point = 0;
    if (s.empty()) { return (false); }

    std::string::iterator it = s.begin();
    if (*it == '-' || *it == '+')
        it++;
    for (; it != s.end(); it++) {
        if (*it == '.' && point == 0) { point++; continue; }
        if (*it < '0' || *it > '9') { return (false); }
    }
    return (true);
}

int BitcoinExchange::last_day(int month, int year)
{
    if (month == 4 || month == 6 || month == 9 || month == 11) { return 30; }
    else if (month == 2){
        if ((year % 4 == 0) || (year % 400 == 0)){ return 29; }
        else { return 28; }
    }
    else { return 31; }
}

bool    BitcoinExchange::SplitDate(std::string s)
{
    std::string s1, s2, s3;
    std::stringstream ss(s);
    getline(ss, s1, '-');
    getline(ss, s2, '-');
    ss >> s3;
    if (s1.size() != 4 || s2.size() != 2 || s3.size() != 2)
        return (false);
    year = atof(s1.c_str());
    month = atof(s2.c_str());
    days = atof(s3.c_str());
    return (true);
}

// ----------------------------------------------------------------------------------

double    BitcoinExchange::CheckPriceCsv(std::string price){
    if (!Isnumber(price))
        Error("Error : data.csv : price number is invalid");
    return (atof(price.c_str()));
}

double    BitcoinExchange::CheckDateCsv(std::string s){
    if (s.size() != 10 || s.find_first_not_of("1234567890-") != std::string::npos || !SplitDate(s))
        Error("Error : data.csv : invalid format of date");
    if (year < 1)
        Error("Error : data.csv : Invalid year");
    if (month < 1 || month > 12)
        Error("Error : data.csv : Invalid month");
    if (days > last_day(month, year) || days < 1)
        Error("Error : data.csv : Invalid day");
    return ((year * 365) + (month * 30.4167) + days);
}

void BitcoinExchange::ReadFileCsv(){

    double date = 0;
    double price = 0;

    data.open("data.csv");
    if (!data.is_open())
        return ;

    std::getline(data, line);
    if (line != "date,exchange_rate")
        Error("Error : data.csv");
    while (std::getline(data, line)) {
        date = CheckDateCsv(line.substr(0,line.find(',')));
        price = CheckPriceCsv(line.substr(line.find(',') + 1));
        CscData.insert(std::pair<double,double>(date,price));
    }
    if (CscData.empty()){
        data.close();
        throw std::runtime_error("Error: file data.csv have no data");
    }
}

// ----------------------------------------------------------------------------------

double  BitcoinExchange::CalculateExchange(double key){
    if (CscData.find(key) != CscData.end())
        return (CscData.find(key)->second);
    std::multimap<double, double>::iterator it = CscData.upper_bound(key);
    it--;
    return (it->second);
}

void    BitcoinExchange::CheckNumber(std::string nmbr, std::string date, double key){
    if (!Isnumber(nmbr))
        std::cout << "Error: bad input => " << nmbr << std::endl;
    else
    {
        double n = atof(nmbr.c_str());
        if (n > 1000) { std::cout << "Error: too large a number." << std::endl; }
        else if (n < 0) { std::cout << "Error: not a positive number." << std::endl; }
        else if (CscData.begin() != CscData.end()){
            std::cout << date << " => " << n * CalculateExchange(key) << std::endl;
        }
        else { std::cout << date << " => " << n << std::endl; }
    }
}

void    BitcoinExchange::CheckDate(std::string s, std::string line) {

    double key = 0;
    if (s.size() != 10 || s.find_first_not_of("1234567890-") != std::string::npos || !SplitDate(s)){
        std::cout << "Error: bad input => " << line << std::endl;
        return ;
    }
    key = (year * 365) + (month * 30.4167) + days;
    if ((month > 12 || month < 1) || (days > last_day(month, year) || days < 1))
        std::cout << "Error: bad input => " << line << std::endl;
    else if (CscData.begin() != CscData.end() && key < CscData.begin()->first)
        std::cout << "Error: Too Low date => " << line << std::endl;
    else
        CheckNumber(line.substr(line.find("| ") + 2), s, key);
}

void BitcoinExchange::ReadFile(){

    file.open(FileName);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");

    std::getline(file, line);
    if (line != "date | value") {
        file.close(); data.close();
        throw std::runtime_error(("Error : bad input => " + line));
    }
    if (file.eof()){
        file.close(); data.close();
        throw std::runtime_error(("Error : No DATA"));
    }
    while (std::getline(file, line))
        CheckDate(line.substr(0,line.find(' ')), line);
        
}
