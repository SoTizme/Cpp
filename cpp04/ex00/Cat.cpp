/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:59 by shilal            #+#    #+#             */
/*   Updated: 2023/10/27 17:43:10 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat : Default constructre called" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string n){
    std::cout << "Cat : Parameterized constructre called" << std::endl;
    type = n;
}

Cat::Cat(Cat const& clap){
    std::cout << "Cat : Copy constructre called" << std::endl;
    *this = clap;
}

Cat& Cat::operator=(Cat const& a){
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat : Deconstruct called" << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << "Meaw...Meaw" << std::endl;
}