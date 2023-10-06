/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:42 by shilal            #+#    #+#             */
/*   Updated: 2023/10/06 16:54:55 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        std::cerr << "Error : enter 3 Parameters: [filename] [string1] [string2]" << std::endl;
    else
        replace r(av[1], av[2], av[3]);
}