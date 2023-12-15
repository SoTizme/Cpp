/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:17 by shilal            #+#    #+#             */
/*   Updated: 2023/12/14 18:04:17 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sys/stat.h>

class BitcoinExchange
{
    private:
        std::ifstream file;
    public:
        BitcoinExchange(std::string FileName);
        ~BitcoinExchange();

    void ReadFile();
    void check_first_line();
};

void    is_Directory(char *path);

#endif