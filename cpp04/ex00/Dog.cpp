/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:21:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/30 22:04:18 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog : Default Constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string n){
    std::cout << "Dog : Parameterized Constructor called" << std::endl;
    type = n;
}

Dog::Dog(Dog const& clap): Animal(){
    std::cout << "Dog : Copy Constructor called" << std::endl;
    *this = clap;
}

Dog& Dog::operator=(Dog const& a){
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Huaw...Huaw" << std::endl;
}