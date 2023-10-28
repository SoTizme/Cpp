/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:54 by shilal            #+#    #+#             */
/*   Updated: 2023/10/28 17:06:46 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal : Default Constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(std::string n){
    std::cout << "Animal : Parameterized Constructor called" << std::endl;
    type = n;
}

Animal::Animal(Animal const& clap){
    std::cout << "Animal : Copy Constructor called" << std::endl;
    *this = clap;
}

Animal& Animal::operator=(Animal const& a){
    std::cout << "Animal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal : Destructor called" << std::endl;
}

std::string Animal::getType() const{
    return (type);
}

void Animal::makeSound(void) const{
    std::cout << "Sound of animal" << std::endl; 
}