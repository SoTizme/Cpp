/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:40:22 by shilal            #+#    #+#             */
/*   Updated: 2023/10/11 21:27:33 by shilal           ###   ########.fr       */
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

        void (Harl::* cmp)( std::string ) = &Harl::complain;
        (lev.*cmp)(av[1]);
    }
}