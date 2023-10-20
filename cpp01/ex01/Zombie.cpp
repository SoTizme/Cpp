/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 02:47:53 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<< "The Object is Created" <<std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<< "The Zombie '"<< name << "' Destroyed" <<std::endl;
}

void Zombie::setname(std::string str){
   name = str;
}

void Zombie::announce(void){
    std:: cout << name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}