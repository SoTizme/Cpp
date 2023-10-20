/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:29:23 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 09:04:35 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std :: cout << "Enter 'One' of this :" << std::endl << "[DEBUG] [INFO] [WARNING] [ERROR]" <<std::endl;
    else
    {
        Harl lev;
        lev.complain(av[1]);
    }
}