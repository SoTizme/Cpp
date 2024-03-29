/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:23:00 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:33:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    type = "ice";
}

Ice::Ice(Ice const& clap){
    *this = clap;
}

Ice& Ice::operator=(Ice const& a){
    type = a.type;
    return (*this);
}

Ice::~Ice(){
}


AMateria* Ice::clone() const{
    Ice *s = new Ice;
    s->type = this->type;
    return s;
}

void Ice::use(ICharacter& target){
    std:: cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}