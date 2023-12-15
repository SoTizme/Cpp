/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:18:20 by shilal            #+#    #+#             */
/*   Updated: 2023/12/14 16:16:30 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){

    try {
        if (ac != 2)
            throw std::runtime_error("Error: could not open file.");
        is_Directory(av[1]);
        BitcoinExchange DB(av[1]);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}