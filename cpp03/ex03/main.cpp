/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/26 15:33:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap c("Player");
    c.whoAmI();

    c.takeDamage(99);
    for (int i = 0; i < 3; i++)
        c.beRepaired(5);
    c.attack("Monster");
    return (0);
}