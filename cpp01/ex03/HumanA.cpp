/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:47 by shilal            #+#    #+#             */
/*   Updated: 2023/10/05 01:02:39 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& am)
{
    this->str = s;
    this->ref_type = &am;
}

void HumanA::attack(void){
    std::cout << this->str << " attacks with their "<< this->ref_type->getType() <<std::endl;
}