/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:19 by shilal            #+#    #+#             */
/*   Updated: 2023/11/03 15:49:04 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    name = "Default";
    error = 0;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
    for (int i = 0; i < 4; i++)
        ptr[i] = 0;
}

Character::Character(std::string const& n){
    name = n;
    error = 0;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
    for (int i = 0; i < 4; i++)
        ptr[i] = 0;
}

Character::Character(Character const& clap){
    name = clap.name;
    error = clap.error;
    for (int i = 0; i < 4; i++)
    {
        if (clap.inventory[i])
            this->inventory[i] = clap.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        if (clap.ptr[i])
            this->ptr[i] = clap.ptr[i]->clone();
        else
            this->ptr[i] = 0;
    }
}

Character& Character::operator=(Character const& a){

    name = a.name;
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
    for (int i = 0; i < 4; i++){
        if (ptr[i])
            delete ptr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a.ptr[i])
            this->ptr[i] = a.ptr[i]->clone();
        else
            this->ptr[i] = 0;
    }
    return (*this);
}

Character::~Character(){

    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
    }
    for (int i = 0; i < 4; i++){
        if (ptr[i])
            delete ptr[i];
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
}

void Character::unequip(int idx){
    
    if ((idx >=0  && idx < 4) && inventory[idx])
    {
        for (int i = 0; i < 4; i++){
            if (!ptr[i]){
                ptr[i] = inventory[idx];
                break ;
            }
        }
        inventory[idx] = 0;
    }
}

void Character::use(int idx, ICharacter& target){
    if ((idx >= 0 && idx < 4) && inventory[idx])
        inventory[idx]->use(target);
}

