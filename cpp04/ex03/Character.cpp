/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:19 by shilal            #+#    #+#             */
/*   Updated: 2023/11/03 13:40:58 by shilal           ###   ########.fr       */
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
    {
        if (clap.inventory[i])
            this->inventory[i] = clap.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
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
    {
        if (a.inventory[i])
            this->inventory[i] = a.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    return (*this);
}

Character::~Character(){
    if (ptr)
        delete ptr;
    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
    }
    if (error)
        delete error;
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
            return ;
        }
    }
    if (error != m)
        delete error;
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

