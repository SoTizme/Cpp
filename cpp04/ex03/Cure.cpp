/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:54 by shilal            #+#    #+#             */
/*   Updated: 2023/11/01 16:27:28 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure : Constructor called" << std::endl;
    type = "cure";
}

Cure::Cure(Cure const& clap){
    std::cout << "Cure : Copy Constructor called" << std::endl;
    *this = clap;
}

Cure& Cure::operator=(Cure const& a){
    std::cout << "Cure : Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

Cure::~Cure(){
    std::cout << "Cure : Destructor called" << std::endl;
}


AMateria* Cure::clone() const{
    Cure *s = new Cure;
    s->type = this->type;
    return s;
}

void Cure::use(ICharacter& target){
    std:: cout << " Cure: \"* shoots an cure bolt at"<< target.getName() << "*\"" <<std::endl;
}