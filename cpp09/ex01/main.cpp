/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:53:06 by shilal            #+#    #+#             */
/*   Updated: 2023/12/25 19:07:01 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){

    try {
        if (ac != 2)
            throw std::runtime_error("Error");
        RPN a(av[1]);
        a.CheckIt(av[1]);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << '\n';
    }
    
    return 0;
}
