/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:02 by shilal            #+#    #+#             */
/*   Updated: 2023/09/30 23:21:44 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    this->name = str;
}

Zombie::~Zombie(void)
{
    std::cout<< "The Object deleted" <<std::endl;
}

void Zombie::announce(void){
    std:: cout << this->name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}