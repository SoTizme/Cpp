/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:53:34 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 19:39:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//  ---------> Orthodox Canonical :

Fixed::Fixed(void){
    FixedPoint = 0;
}

Fixed::~Fixed(void){}

Fixed::Fixed(const Fixed & copy_class){
    FixedPoint = copy_class.FixedPoint;
}

Fixed::Fixed(const int n){
    FixedPoint = n << nByt;
}

Fixed::Fixed(const float n){
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
    return(FixedPoint);
}

void Fixed::setRawBits(int const raw){
    FixedPoint = raw;
}

// Operator Overloding :

std::ostream& operator<<(std::ostream& output, const Fixed& fclass){
    output << fclass.toFloat();
    return (output);
}

// Arithmetic Operators :

Fixed Fixed::operator*(Fixed const& fclass) {
    return (toFloat() * fclass.toFloat());
}

Fixed Fixed::operator+(Fixed const& fclass) {
    return (toFloat() + fclass.toFloat());
}

Fixed Fixed::operator-(Fixed const& fclass) {
    return (toFloat() - fclass.toFloat());
}

Fixed Fixed::operator/(Fixed const& fclass) {
    return (toFloat() / fclass.toFloat());
}

// Comparison Operators :

bool Fixed::operator>(Fixed const& fclass) const{
    return (this->toFloat() > fclass.toFloat());
}

bool Fixed::operator<(Fixed const& fclass) const{
    return (this->toFloat() < fclass.toFloat());
}

bool Fixed::operator<=(Fixed const& fclass)const{
    return (this->toFloat() <= fclass.toFloat());
}

bool Fixed::operator>=(Fixed const& fclass)const {
    return (this->toFloat() >= fclass.toFloat());
}

bool Fixed::operator==(Fixed const& fclass)const{
    return (this->toFloat() == fclass.toFloat());
}

bool Fixed::operator!=(Fixed const& fclass)const{
    return (this->toFloat() != fclass.toFloat());
}

// Prefix & postfix Operator :

Fixed& Fixed::operator++(void){
    ++FixedPoint;
    return *this;
}

Fixed& Fixed::operator--(void){
    --FixedPoint;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp(this->toFloat());
    --FixedPoint;
    return tmp;
}

Fixed Fixed::operator++(int){
    Fixed tmp(this->toFloat());
   ++FixedPoint;
    return tmp;
}

//  ---------> Static Member Function :

Fixed const& Fixed::min(Fixed const& class1, Fixed const& class2){
    if (class1 < class2)
        return (class1);
    return (class2);
}

Fixed const& Fixed::max(Fixed const& class1, Fixed const& class2){
    if (class1 >= class2)
        return (class1);
    return (class2);
}

Fixed& Fixed::min(Fixed& class1, Fixed& class2){
    if (class1 < class2)
        return (class1);
    return (class2);
}

Fixed& Fixed::max(Fixed& class1, Fixed& class2){
    if (class1 >= class2)
        return (class1);
    return (class2);
}