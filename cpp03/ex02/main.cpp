/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/26 12:23:29 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap c("Player1");
    ScavTrap a("Player2");

    c.highFivesGuys();
        c.takeDamage(99);
        c.beRepaired(4);
        for (int i = 0; i < 3; i++)
            c.attack("Monster");
        c.takeDamage(9);

    a.guardGate();
        a.takeDamage(99);
        a.beRepaired(4);
        for (int i = 0; i < 3; i++)
            a.attack("Monster");
        a.takeDamage(9);

    return (0);
}