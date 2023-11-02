/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:54 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:33:36 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    type = "cure";
}

Cure::Cure(Cure const& clap){
    *this = clap;
}

Cure& Cure::operator=(Cure const& a){
    type = a.type;
    return (*this);
}

Cure::~Cure(){
}


AMateria* Cure::clone() const{
    Cure *s = new Cure;
    s->type = this->type;
    return s;
}

void Cure::use(ICharacter& target){
    std:: cout << "* heals "<< target.getName() << "’s wounds *" <<std::endl;
}