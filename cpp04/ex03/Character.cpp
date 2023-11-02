/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:19 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 22:22:34 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    name = "Default";
    ptr = 0;
    error = 0;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(std::string const& n){
    name = n;
    ptr = 0;
    error = 0;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(Character const& clap){
    name = clap.name;
    ptr = clap.ptr;
    error = clap.error;
    for (int i = 0; i < 4; i++)
        inventory[i] = clap.inventory[i];
}

Character& Character::operator=(Character const& a){

    name = a.name;
    ptr = a.ptr;
    error = a.error;
    for (int i = 0; i < 4; i++){
        if (inventory[i])
            delete inventory[i];
    }
    for (int i = 0; i < 4; i++)
        inventory[i] = a.inventory[i];
    return (*this);
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
    }
    if (ptr)
        delete ptr;
}

std::string const& Character::getName() const{
    return (name);
}

void Character::equip(AMateria* m){

    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m)
            return ;
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
    if (error && (error != m))
        delete m;
    error = m;
}

void Character::unequip(int idx){
    
    if (inventory[idx])
    {
        if (ptr)
            delete ptr;
        ptr = inventory[idx];
        inventory[idx] = 0;
    }
}

void Character::use(int idx, ICharacter& target){
    if ((idx >= 0 && idx < 4) && inventory[idx])
        inventory[idx]->use(target);
}

