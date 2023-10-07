/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/01 01:18:30 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<< "The Object is creacted " <<std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<< "The Object deleted" <<std::endl;
}

void Zombie::setname(std::string str, int i){
   this->name = str;
   this->index = i;
}

void Zombie::announce(void){
    std:: cout << this->name << this->index <<":  BraiiiiiiinnnzzzZ..."<< std::endl;
}