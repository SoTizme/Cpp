/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:11:18 by shilal            #+#    #+#             */
/*   Updated: 2023/10/01 21:18:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    std::cout << club.getType() << std::endl;
    HumanA bob("Bob", club);
    bob.attack();

    // club.setType("some other type of club");
    // std::cout << club.getType() << std::endl;
    return(0);
}