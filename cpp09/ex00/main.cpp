/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:20 by shilal            #+#    #+#             */
/*   Updated: 2023/12/25 19:54:27 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    is_Directory(char *path){

    struct stat directory;
    if (stat(path ,&directory) == -1)
        throw std::runtime_error("Error : Path dosnt exist");
    if (S_ISDIR(directory.st_mode))
        throw std::runtime_error("Error : is Directory");
}

int main(int ac, char **av){

    try {
        if (ac != 2)
            throw std::runtime_error("Error: could not open file.");
        is_Directory(av[1]);
        BitcoinExchange DB(av[1]);
        DB.ReadFile();
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}