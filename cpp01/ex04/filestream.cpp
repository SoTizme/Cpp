/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:53 by shilal            #+#    #+#             */
/*   Updated: 2023/10/06 21:30:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

replace::replace(char *f_name, std::string str1, std::string str2) : s1(str1), s2(str2)
{
    std::string str;
    std::string r_str;
    int pos = 0;
    int len = str1.length();

    this->file.open (f_name);
    if (!this->file.is_open())
        std::cerr << "Error : Filename doesn't exist" << std::endl;
    while (!this->file.eof())
    {
        std::getline(this->file, str);
        std::cout << str << std::endl;
        pos = str.find(str1);
        while (pos != -1)
        {
            std::cout << len << std::endl;
            std::cout << pos << std::endl;
            r_str = str.substr((pos + len), str.length());
            r_str.insert(0,str2);
            std::cout << r_str << std::endl;
            pos = str.find(r_str);
        }
    }
}

replace::~replace(){
    this->file.close();
}