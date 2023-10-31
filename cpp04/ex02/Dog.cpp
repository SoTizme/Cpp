/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:21:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 16:22:08 by shilal           ###   ########.fr       */
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
    this->d = new Brain(*clap.d);
    this->type = clap.type;
}

Dog& Dog::operator=(Dog const& a){
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    delete this->d;
    this->d = new Brain(*a.d);
    this->type = a.type;
    return (*this);
}

Dog::~Dog(){
    delete d;
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Huaw...Huaw" << std::endl;
}