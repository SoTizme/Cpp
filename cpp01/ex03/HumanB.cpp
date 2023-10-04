/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:50 by shilal            #+#    #+#             */
/*   Updated: 2023/10/04 03:12:47 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s){
    this->str = s;
}

HumanB::~HumanB(void){
    std:: cout << "the HumanB finiched"<< std::endl;
}

void HumanB::attack(void){
    std::cout << this->str << " attacks with their " << this->Wep->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon wepn){
    this->Wep = new Weapon(wepn);
}