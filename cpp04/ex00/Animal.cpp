/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:54 by shilal            #+#    #+#             */
/*   Updated: 2023/10/27 18:57:08 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal : Default constructre called" << std::endl;
    type = "Animal";
}

Animal::Animal(std::string n){
    std::cout << "Animal : Parameterized constructre called" << std::endl;
    type = n;
}

Animal::Animal(Animal const& clap){
    std::cout << "Animal : Copy constructre called" << std::endl;
    *this = clap;
}

Animal& Animal::operator=(Animal const& a){
    std::cout << "Animal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal : Deconstruct called" << std::endl;
}

std::string Animal::getType() const{
    return (type);
}

void Animal::makeSound(void) const{
    std::cout << "Sound of animal" << std::endl; 
}