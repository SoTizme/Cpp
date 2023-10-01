/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:47 by shilal            #+#    #+#             */
/*   Updated: 2023/10/01 21:42:11 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon am)
{
    this->str = s;
    this->aram = &am;
}

HumanA::~HumanA(void){
    std::cout << "attack is finished" << std::endl;
}

void HumanA::attack(void){
    std::cout << this->str << " attacks with their" << std::endl;
}