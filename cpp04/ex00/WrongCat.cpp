/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:54:40 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 15:58:08 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat : Default Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(std::string n){
    std::cout << "WrongCat : Parameterized Constructor called" << std::endl;
    type = n;
}

WrongCat::WrongCat(WrongCat const& clap){
    std::cout << "WrongCat : Copy Constructor called" << std::endl;
    *this = clap;
}

WrongCat& WrongCat::operator=(WrongCat const& a){
    std::cout << "WrongCat : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat : Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const{
    std::cout << "WrongCat Sound" << std::endl;
}