/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:53 by shilal            #+#    #+#             */
/*   Updated: 2023/10/13 21:40:59 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

bool replace::open_files(void){

    this->file.open(this->name);
    if (!this->file.is_open()){
        std::cerr << "Error : opening file" << std::endl;
        return (false);
    }

    this->name.insert(this->name.length(), ".replace");
    this->r_file.open (this->name);
    if (!this->r_file.is_open()){
        std::cerr << "Error : opening file 2" << std::endl;
        return (false);
    }
    return (true);
}


replace::replace(std::string f_name, std::string str1, std::string str2) : name(f_name)
{
    std::string str;
    int pos;

    if (!open_files())
        return ;
    while (std::getline(this->file, str))
    {
        pos = 0;
        pos = str.find(str1, pos);
        while (pos != -1)
        {
            str.erase(pos, str1.length());
            str.insert(pos, str2);
            pos = str.find(str1, pos + str2.length());
        }
        this->r_file << str;
        if (this->file.eof())
            break;
        this->r_file << std::endl;
    }
}

replace::~replace(){
    this->file.close();
    this->r_file.close();
}