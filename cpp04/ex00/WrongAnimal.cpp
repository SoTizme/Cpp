/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:51:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 15:52:15 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal : Default Constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string n){
    std::cout << "WrongAnimal : Parameterized Constructor called" << std::endl;
    type = n;
}

WrongAnimal::WrongAnimal(WrongAnimal const& clap){
    std::cout << "WrongAnimal : Copy Constructor called" << std::endl;
    *this = clap;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& a){
    std::cout << "WrongAnimal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}

void WrongAnimal::makeSound(void) const{
    std::cout << "Sound of WrongAnimal" << std::endl; 
}