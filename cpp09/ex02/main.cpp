/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:35 by shilal            #+#    #+#             */
/*   Updated: 2023/12/25 20:07:01 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool AllIsDigits(char **av){

    for (size_t i = 1; av[i]; i++){
        for (size_t j = 0; av[i][j]; j++){
            if (av[i][j] < '0' || av[i][j] > '9')
                return (false);
        }
    }
    return (true);
}

int main(int ac, char **av)
{
    try {
        if (ac <= 1)
            throw std::runtime_error("Error: Add the numbers");
        if (!AllIsDigits(av))
            throw std::runtime_error("Error: Not a valid arguments");
        PmergeMe obj(av + 1, ac - 1);
        obj.SetVec();
        obj.Setdeque();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
