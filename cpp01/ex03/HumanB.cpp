/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:50 by shilal            #+#    #+#             */
/*   Updated: 2023/10/05 01:02:57 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void){

    std::cout << this->str << " attacks with their ";

    if (this->ptr_type->getType() != "")
        std::cout << this->ptr_type->getType() <<std::endl;
    else
        std::cout <<std::endl;
}

void HumanB::setWeapon(Weapon& wepn){
    this->ptr_type = &wepn;
}