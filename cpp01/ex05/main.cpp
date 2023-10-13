/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:40:22 by shilal            #+#    #+#             */
/*   Updated: 2023/10/13 02:13:41 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std :: cout << "Enter the level u want :" << std::endl << "[DEBUG] [INFO] [WARNING] [ERROR]" <<std::endl;
    else
    {
        Harl lev;
        lev.complain(av[1]);
    }
}