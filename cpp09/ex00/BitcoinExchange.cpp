/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:13 by shilal            #+#    #+#             */
/*   Updated: 2023/12/17 23:57:24 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// --------------------- Canonical form :
BitcoinExchange::BitcoinExchange(std::string FileName){
    data.open("data.csv");
    if (!data.is_open())
        throw std::runtime_error("Error: thers's no file csv");
    ReadFileCsv();

    file.open(FileName);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");
    //ReadFile();
}

BitcoinExchange::~BitcoinExchange(){
    file.close();
    data.close();
}

// --------------------- Members functions :

void split(std::string line){
    for (size_t i = 0; i < line.size(); i++){
        size_t j = line.find('|');
        line.erase(j, 1);
        std::cout << line << std::endl;
    }
}

double    BitcoinExchange::CheckPrice(std::string price){

    if(price.find_first_not_of("1234567890. ") != std::string::npos)
        throw std::runtime_error("Error : data.csv : price number is invalid");
    return (atof(price.c_str()));
}

int last_day(int month, int year){
    int num_days = 0;
    if(month==1||month==3||month==5||month==7|| month==8|| month==10|| month==12)
        num_days=31;
    else if(month==2)
    {
        if((year%4==0) || (year%400==0))
            num_days=29;
        else
            num_days=28;
    }
    else
        num_days=30;
    return num_days;
}

int    BitcoinExchange::CheckDate(std::string s){
    if (s.size() != 10 || s.find_first_not_of("1234567890-") != std::string::npos)
        throw std::runtime_error("Error : data.csv : invalid format of date");
    std::stringstream ss(s);
    int year, month ,days;
    ss >> year >> month >> days;
    month *= -1;
    days *= -1;
    if (year < 2009)
        throw std::runtime_error("Error : data.csv : Invalid year");
    if (month > 12 || month < 1)
        throw std::runtime_error("Error : data.csv : Invalid month");
    if (days > last_day(month, year) || days < 1)
        throw std::runtime_error("Error : data.csv : Invalid day");
    std::cout << year << ' '<< month << ' ' << days << " == "<<(year * 365) + (month * 30.4167) + days <<'\n';
    return ((year * 365) + (month * 30.4167) + days);
}

void BitcoinExchange::ReadFileCsv(){
    double price = 0;
    int days = 0;
    std::getline(data, line);
    if (line != "date,exchange_rate")
        throw std::runtime_error("Error : data.csv");
     while (std::getline(data, line)){
        days = CheckDate(line.substr(0,line.find(',')));
        price = CheckPrice(line.substr(line.find(',') + 1, line.size()));
        // std::cout << price << std::endl;
     }
}

void BitcoinExchange::check_first_line(std::string str){

    while (std::getline(file, line)){
        if (line[0] && !line.find_first_not_of("\n\t\v\f\r "))
            break;
    }
    if (line != str)
        throw std::runtime_error("Error : file");
}

void BitcoinExchange::ReadFile(){
    check_first_line("date | value");
    while (std::getline(file, line) && line[0]){
        std::cout << line <<std::endl;
    }
}

// --------------------- Functions:

void    is_Directory(char *path){

    struct stat directory;
    if (stat(path ,&directory) == -1)
        throw std::runtime_error("Error : Path dosnt exist");
    if (S_ISDIR(directory.st_mode))
        throw std::runtime_error("Error : is Directory");
}
