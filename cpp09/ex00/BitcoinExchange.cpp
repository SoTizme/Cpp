/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:13 by shilal            #+#    #+#             */
/*   Updated: 2023/12/16 14:50:37 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string FileName){
    data.open("data.csv");
    if (!data.is_open())
        throw std::runtime_error("Error: thers's no file csv");
    ReadFileCsv();

    file.open(FileName);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");
    // ReadFile();
}

BitcoinExchange::~BitcoinExchange(){
    file.close();
    data.close();
}


void BitcoinExchange::check_first_line(std::string str){

    while (std::getline(data, line)){
        if (line[0] && !line.find_first_not_of("\n\t\v\f\r "))
            break;
    }
    if (line != str){
       std::cout << "======"<< line << std::endl;
       std::cout << "======"<< str << std::endl;
        
    }
}

// void split(std::string line){
//     for (size_t i = 0; i < line.size(); i++){
//         size_t j = line.find('|');
//         line.erase(j, 1);
//         std::cout << line << std::endl;
//     }
// }

void BitcoinExchange::ReadFileCsv(){
    check_first_line("date,exchange_rate");
    // while (std::getline(file, line) && line[0]){
    //     split(line);
    //     std::cout << line <<std::endl;
    // }
}

void BitcoinExchange::ReadFile(){
    check_first_line("date | value");
    while (std::getline(file, line) && line[0]){
        std::cout << line <<std::endl;
    }
}

void    is_Directory(char *path){

    struct stat directory;
    if (stat(path ,&directory) == -1)
        throw std::runtime_error("Error : Path dosnt exist");
    if (S_ISDIR(directory.st_mode))
        throw std::runtime_error("Error : is Directory");
}
