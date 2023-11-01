/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:08:38 by shilal            #+#    #+#             */
/*   Updated: 2023/11/01 18:19:44 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria : Constructor called" << std::endl;
    type = "Default";
}

AMateria::AMateria(std::string const& n){
    std::cout << "AMateria : Parameterized Constructor called" << std::endl;
    type = n;
}

AMateria::AMateria(AMateria const& clap){
    std::cout << "AMateria : Copy Constructor called" << std::endl;
    *this = clap;
}

AMateria& AMateria::operator=(AMateria const& a){
    std::cout << "AMateria : Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

AMateria::~AMateria(){
    std::cout << "AMateria : Destructor called" << std::endl;
}

std::string const& AMateria::getType() const{
    return (type);
}

void AMateria::use(ICharacter& target){
    std:: cout << " AMateria: \"* shoots an cure bolt at"<<target.getName() << "*\"" <<std::endl;
}