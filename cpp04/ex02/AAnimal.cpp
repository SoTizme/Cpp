/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:43:50 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 18:21:04 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal : Default Constructor called" << std::endl;
    type = "AAnimal";
}

AAnimal::AAnimal(std::string n){
    std::cout << "AAnimal : Parameterized Constructor called" << std::endl;
    type = n;
}

AAnimal::AAnimal(AAnimal const& clap){
    std::cout << "AAnimal : Copy Constructor called" << std::endl;
    *this = clap;
}

AAnimal& AAnimal::operator=(AAnimal const& a){
    std::cout << "AAnimal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal : Destructor called" << std::endl;
}

std::string AAnimal::getType() const{
    return (type);
}
