/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:11:45 by shilal            #+#    #+#             */
/*   Updated: 2023/10/05 00:00:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
    this->str = s;
}

const std::string Weapon::getType(void){
    return (this->str);
}

void Weapon::setType(std::string name){
    this->str = name;
    
}