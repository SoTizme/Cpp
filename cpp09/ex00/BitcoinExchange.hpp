/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:17 by shilal            #+#    #+#             */
/*   Updated: 2023/12/17 22:56:25 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <sys/stat.h>

class BitcoinExchange
{
    private:
        std::ifstream file;
        std::ifstream data;
        std::string line;
    public:
        BitcoinExchange(std::string FileName);
        ~BitcoinExchange();

    void check_first_line(std::string str);
    double CheckPrice(std::string exchange);
    int  CheckDate(std::string date);
    void ReadFileCsv();
    void ReadFile();
};

void    is_Directory(char *path);

#endif