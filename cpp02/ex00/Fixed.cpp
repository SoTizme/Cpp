/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:34:41 by shilal            #+#    #+#             */
/*   Updated: 2023/10/20 16:04:29 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){

    this->nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){

    std::cout << "Destructor called"<<std::endl;
}

Fixed:: Fixed(Fixed &copy_class){

    std::cout << "Copy constructor called" << std::endl;
    this->nb = copy_class.getRawBits();
}

Fixed Fixed:: operator=(Fixed const& fclass) {

    std::cout << "Copy assignment operator called" << std::endl;

    Fixed c;
    c.nb = fclass.getRawBits();
    return (c);
}

int Fixed::getRawBits(void) const{

    std::cout << "getRawBits member function called" << std::endl;
    return(this->nb);
}


void Fixed::setRawBits(int n){
    this->nb = n;
}