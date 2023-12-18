/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:17 by shilal            #+#    #+#             */
/*   Updated: 2023/12/18 13:53:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <sys/stat.h>
#include <map>

class BitcoinExchange
{
    private:
        std::multimap<std::string,double> CscData;
        std::ifstream file;
        std::ifstream data;
        std::string line;
        int year, month ,days;

    public:
        BitcoinExchange(std::string FileName);
        ~BitcoinExchange();

    int last_day(int month, int year);
    void SplitDate(std::string s);

    std::string  CheckDateCsv(std::string date);
    double CheckPriceCsv(std::string exchange);
    void ReadFileCsv();

    void  CheckNumber(std::string nmbr, std::string date);
    void  CheckDate(std::string date);
    void ReadFile();
};

void    is_Directory(char *path);

#endif