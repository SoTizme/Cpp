/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:17 by shilal            #+#    #+#             */
/*   Updated: 2023/12/26 18:29:22 by shilal           ###   ########.fr       */
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
        std::multimap<double,double> CscData;
        std::ifstream file;
        std::ifstream data;
        std::string line;
        std::string FileName;
        int year, month ,days;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string FileName);
        BitcoinExchange(const BitcoinExchange& clap);
        BitcoinExchange& operator=(const BitcoinExchange& clap);
        ~BitcoinExchange();

    private:
        int last_day(int month, int year);
        bool SplitDate(std::string s);
        bool Isnumber(std::string s);
        void Error(std::string s);

        double CheckDateCsv(std::string date);
        double CheckPriceCsv(std::string exchange);
        void   ReadFileCsv();

        void  CheckNumber(std::string nmbr, std::string date, double key);
        double CalculateExchange(double key);
        void  CheckDate(std::string date, std::string line);
    public:
        void ReadFile();
};

void    is_Directory(char *path);

#endif