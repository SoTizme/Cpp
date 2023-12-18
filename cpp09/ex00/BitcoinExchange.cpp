/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:13 by shilal            #+#    #+#             */
/*   Updated: 2023/12/18 16:43:50 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// --------------------- Canonical form :
BitcoinExchange::BitcoinExchange(std::string FileName){
    data.open("data.csv");
    if (!data.is_open())
        throw std::runtime_error("Error: thers's no file csv");
    ReadFileCsv();
    // for (std::multimap<std::string, double>::iterator itr = CscData.begin(); itr != CscData.end(); ++itr)
    //     std::cout << '|' << itr->first << "| " << itr->second << std::endl;

    file.open(FileName);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");
    ReadFile();
}

BitcoinExchange::~BitcoinExchange(){
    file.close();
    data.close();
}

// --------------------- Members functions :

int BitcoinExchange::last_day(int month, int year){

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2){
        if ((year % 4 == 0) || (year % 400 == 0))
            return 29;
        else
            return 28;
    }
    else
        return 31;
}

void    BitcoinExchange::SplitDate(std::string s){
    std::stringstream ss(s);
    ss >> year >> month >> days;
    month *= -1;
    days *= -1;
}

double    BitcoinExchange::CheckPriceCsv(std::string price){
    if (price.find_first_not_of("1234567890. ") != std::string::npos)
        throw std::runtime_error("Error : data.csv : price number is invalid");
    return (atof(price.c_str()));
}

std::string    BitcoinExchange::CheckDateCsv(std::string s){
    if (s.size() != 10 || s.find_first_not_of("1234567890-") != std::string::npos)
        throw std::runtime_error("Error : data.csv : invalid format of date");
    SplitDate(s);
    if (year < 1)
        throw std::runtime_error("Error : data.csv : Invalid year");
    if (month < 1 || month > 12)
        throw std::runtime_error("Error : data.csv : Invalid month");
    if (days > last_day(month, year) || days < 1)
        throw std::runtime_error("Error : data.csv : Invalid day");
    return (s);
}

void BitcoinExchange::ReadFileCsv(){

    std::string date;
    double price = 0;

    std::getline(data, line);
    if (line != "date,exchange_rate")
        throw std::runtime_error("Error : data.csv");
    while (std::getline(data, line)) {
        date = CheckDateCsv(line.substr(0,line.find(',')));
        price = CheckPriceCsv(line.substr(line.find(',') + 1, line.size()));
        CscData.insert(std::pair<std::string,double>(date,price));
    }
}

// ---------------------------------------------------------------------------------

void    BitcoinExchange::CheckNumber(std::string nmbr, std::string date){
    if (nmbr.find_first_not_of("1234567890.-") != std::string::npos)
        std::cout << "Error: bad input => " << nmbr << std::endl;
    else
    {
        double n = atof(nmbr.c_str());
        if (n > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else if (n < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else
            std::cout << date << " => " << nmbr << std::endl;
    }
}

void    BitcoinExchange::CheckDate(std::string s){
    if (s.size() != 10 || s.find_first_not_of("1234567890-") != std::string::npos)
        throw std::runtime_error("Error : data.csv : invalid format of date");
    SplitDate(s);
    if (year < 2009 || (month > 12 || month < 1) || (days > last_day(month, year) || days < 1))
        std::cout << "Error: bad input => " << s << std::endl;
    else
        CheckNumber(line.substr(line.find('|') + 2, line.size()), s);
}

void BitcoinExchange::ReadFile(){

    while (std::getline(file, line)){
        if (line[0] && !line.find_first_not_of("\n\t\v\f\r "))
            break;
    }
    if (line != "date | value")
        throw std::runtime_error(("Error : bad input => " + line));

    while (std::getline(file, line) && line[0])
        CheckDate(line.substr(0,line.find(' ')));
}

// --------------------- Functions:

void    is_Directory(char *path){

    struct stat directory;
    if (stat(path ,&directory) == -1)
        throw std::runtime_error("Error : Path dosnt exist");
    if (S_ISDIR(directory.st_mode))
        throw std::runtime_error("Error : is Directory");
}
