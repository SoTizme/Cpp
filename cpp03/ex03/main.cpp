/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/26 12:36:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap c("Player");
    c.whoAmI();

    c.takeDamage(9);
    for (int i = 0; i <= 9; i++)
        c.beRepaired(5);
    c.attack("Monster");
    return (0);
}