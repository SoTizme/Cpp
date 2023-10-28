/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:21:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/28 18:27:34 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog : Default Constructor called" << std::endl;
    this->d = new Brain;
    type = "Dog";
}

Dog::Dog(std::string n){
    std::cout << "Dog : Parameterized Constructor called" << std::endl;
    this->d = new Brain;
    type = n;
}

Dog::Dog(Dog const& clap){
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
    delete d;
}

void Dog::makeSound(void) const{
    std::cout << "Huaw...Huaw" << std::endl;
}