/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:19 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:32:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    name = "Default";
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(std::string const& n){
    name = n;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(Character const& clap){
    *this = clap;
}

Character& Character::operator=(Character const& a){

    name = a.name;
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = a.inventory[i];
    }  
    return (*this);
}

Character::~Character(){
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

std::string const& Character::getName() const{
    return (name);
}

void Character::equip(AMateria* m){

     for (int i = 0; i < 4; i++)
     {
        if (!inventory[i])
        {
            inventory[i] = m;
            std::cout << m->getType() <<"hii\n";
            break ;
        }
     }
}

void Character::unequip(int idx){

    if (inventory[idx])
        inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target){
    if (inventory[idx])
        inventory[idx]->use(target);
}

