/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:12:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 09:07:42 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str){

    name = str;
}

Zombie::~Zombie(void){

    std::cout<< "The Object Destroyed" <<std::endl;
}

void Zombie::announce(void){

    std:: cout << name << " :  BraiiiiiiinnnzzzZ..."<< std::endl;
}