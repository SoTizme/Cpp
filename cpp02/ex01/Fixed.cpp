/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:34:41 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 19:34:00 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//  ---------> Orthodox Canonical :
 
Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->FixedPoint = 0;
}

Fixed::Fixed(const Fixed& copy_class){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy_class;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(const int n){
    std::cout << "Int constructor called" <<std::endl;
    FixedPoint = n << nByt;
}

Fixed::Fixed(const float n){
    std::cout << "Float constructor called" <<std::endl;
    FixedPoint = roundf(n * (1 << nByt));
}

//  ---------> Member Function :

int Fixed::toInt(void) const{
    return (FixedPoint >> nByt);
}

float Fixed::toFloat(void) const{
    return ((float)FixedPoint / (1 << nByt));
}

int Fixed::getRawBits(void) const{
    std::cout << "GetRawBits member function called" << std::endl;
    return(this->FixedPoint);
}

void Fixed::setRawBits(int const raw){
    this->FixedPoint = raw;
}

//  ---------> Operator Overloading: 

Fixed& Fixed::operator=(Fixed const& fclass){
    std::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = fclass.FixedPoint;
    return (*this);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fclass){
    output << fclass.toFloat();
    return (output);
}