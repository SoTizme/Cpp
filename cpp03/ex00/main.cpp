/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 11:34:42 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("hilal");

    c.takeDamage(9);
    c.takeDamage(10);

    c.beRepaired(10);
    c.attack("nana");

    return (0);
}