/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:34:41 by shilal            #+#    #+#             */
/*   Updated: 2023/10/20 17:11:58 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){

    this->FixedPointInt = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & copy_class){
    this->FixedPointInt = copy_class.FixedPointInt;
}

Fixed::~Fixed(void){

    std::cout << "Destructor called" <<std::endl;
}

Fixed:: Fixed(const int n){
    FixedPointInt = n << nByt;
}

Fixed:: Fixed(const float n){
    FixedPointInt = roundf(n * (1 << nByt));
}

int Fixed::toInt(void) const{
    return (FixedPointInt >> nByt);
}

float Fixed::toFloat(void) const{
    return ((float)FixedPointInt / (1 << nByt));
}

std::ostream& operator << (std::ostream& output, const Fixed& fclass){
    output << fclass.toFloat();
    return (output);
}