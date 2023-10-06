/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:42 by shilal            #+#    #+#             */
/*   Updated: 2023/10/06 01:43:14 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "Enter 3 Parameters: [filename] [string1] [string2]" << std::endl;
    else{
        std::fstream file;
        std::string str;
        file.open (av[1]);
        while (!file.eof())
        {
            std::getline(file, str);
            std::cout << str << std::endl;
        }
        file.close();
    }
}