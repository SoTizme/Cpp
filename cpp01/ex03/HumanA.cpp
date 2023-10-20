/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:47 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 04:01:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &am): str(s), ref_type(am){
  
}

void HumanA::attack(void){

    std::cout << str << " attacks with their " << this->ref_type.getType() << std::endl;
}