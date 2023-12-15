/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:13 by shilal            #+#    #+#             */
/*   Updated: 2023/12/15 12:29:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string FileName){
    file.open(FileName);
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");
    ReadFile();
}

BitcoinExchange::~BitcoinExchange(){
    file.close();
}

void BitcoinExchange::check_first_line(){

    std::string line;
    while (std::getline(file, line)){
        if (line[0] && !line.find_first_not_of("\n\t\v\f\r "))
            break;
    }
    if (line != "date | value")
        throw std::runtime_error("Error : ");
 
    std::cout << line << std::endl;
}
void BitcoinExchange::ReadFile(){
    check_first_line();
}

void    is_Directory(char *path){

    struct stat directory;
    if (stat(path ,&directory) == -1)
        throw std::runtime_error("Error : Path dosnt exist");
    if (S_ISDIR(directory.st_mode))
        throw std::runtime_error("Error : is Directory");
}
