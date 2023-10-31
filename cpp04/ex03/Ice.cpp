/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:23:00 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 19:32:46 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice : Constructor called" << std::endl;
    type = "ice";
}

Ice::Ice(Ice const& clap){
    std::cout << "Ice : Copy Constructor called" << std::endl;
    *this = clap;
}

Ice& Ice::operator=(Ice const& a){
    std::cout << "Ice : Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

Ice::~Ice(){
    std::cout << "Ice : Destructor called" << std::endl;
}


AMateria* Ice::clone() const{
    Ice *s = new Ice;
    s->type = this->type;
    return s;
}