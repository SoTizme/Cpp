/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:59 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 16:16:15 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat : Default Constructor called" << std::endl;
    this->c = new Brain;
    type = "Cat";
}

Cat::Cat(std::string n){
    std::cout << "Cat : Parameterized Constructor called" << std::endl;
    this->c = new Brain;
    type = n;
}

Cat::Cat(Cat const& clap){
    std::cout << "Cat : Copy Constructor called" << std::endl;
    this->c = new Brain(*clap.c);
    this->type = clap.type;
}

Cat& Cat::operator=(Cat const& a){
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    delete this->c;
    this->c = new Brain(*a.c);
    this->type = a.type;
    return (*this);
}

Cat::~Cat(){
    delete c;
    std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << "Meaw...Meaw" << std::endl;
}