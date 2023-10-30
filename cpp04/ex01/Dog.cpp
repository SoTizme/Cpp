/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:21:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/30 22:03:26 by shilal           ###   ########.fr       */
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

Dog::Dog(Dog const& clap) : Animal(){
    std::cout << "Dog : Copy Constructor called" << std::endl;
    *this = clap;
}

Dog& Dog::operator=(Dog const& a){
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    this->d = new Brain;
    for (int i = 0; i < 100; i++)
        this->d->ideas[i] = a.d->ideas[i];
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