/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:08:38 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:34:22 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    type = "Default";
}

AMateria::AMateria(std::string const& n){
    type = n;
}

AMateria::AMateria(AMateria const& clap){
    *this = clap;
}

AMateria& AMateria::operator=(AMateria const& a){
    type = a.type;
    return (*this);
}

AMateria::~AMateria(){
}

std::string const& AMateria::getType() const{
    return (type);
}

void AMateria::use(ICharacter& target){
    std:: cout << " AMateria : " <<target.getName() << " *" <<std::endl;
}