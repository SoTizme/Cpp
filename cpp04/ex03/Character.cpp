/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:19 by shilal            #+#    #+#             */
/*   Updated: 2023/11/01 18:35:39 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    std::cout << "Character : Constructor called" << std::endl;
    name = "Default";
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(std::string const& n){
    std::cout << "Character : Parameterized Constructor called" << std::endl;
    name = n;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(Character const& clap){
    std::cout << "Character : Copy Constructor called" << std::endl;
    *this = clap;
}

Character& Character::operator=(Character const& a){
    std::cout << "Character : Copy assignment operator called" << std::endl;
    name = a.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = a.inventory[i];
    return (*this);
}

Character::~Character(){
    std::cout << "Character : Destructor called" << std::endl;
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
    {
        std:: cout << " hahahahahah" << std::endl;
        inventory[idx]->use(target);
        
    }
}

