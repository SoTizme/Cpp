/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:34:41 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 15:56:49 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//  ---------> Orthodox Canonical :
 
Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->FixedPoint = 0;
}

Fixed::Fixed(Fixed& copy_class){
    std::cout << "Copy constructor called" << std::endl;
    this->FixedPoint = copy_class.getRawBits();
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" <<std::endl;
}

//  ---------> Member Function : 

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->FixedPoint);
}

void Fixed::setRawBits(int const raw){
    this->FixedPoint = raw;
}

//  ---------> Operator Overloading: 

Fixed& Fixed::operator=(Fixed const& fclass){

    std::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = fclass.getRawBits();
    return (*this);
}