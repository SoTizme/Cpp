/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:21:01 by shilal            #+#    #+#             */
/*   Updated: 2023/10/27 17:43:17 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog : Default constructre called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string n){
    std::cout << "Dog : Parameterized constructre called" << std::endl;
    type = n;
}

Dog::Dog(Dog const& clap){
    std::cout << "Dog : Copy constructre called" << std::endl;
    *this = clap;
}

Dog& Dog::operator=(Dog const& a){
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog : Deconstruct called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Huaw...Huaw" << std::endl;
}