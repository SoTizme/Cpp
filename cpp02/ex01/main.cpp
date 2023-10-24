/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:28:14 by shilal            #+#    #+#             */
/*   Updated: 2023/10/23 19:36:02 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{

    Fixed a;
    Fixed b = a ;
    
    // Fixed const b(10);
    // Fixed const c(42.42f);
    // Fixed const d(b);

    // a = Fixed(1234.4321f);

    // std::cout << "a is " << a.getRawBits() << std::endl;
    // std::cout << "a is " << b.getRawBits() << std::endl;
    // std::cout << "a is " << c.getRawBits() << std::endl;

    // // std::cout << "a is " << a << std::endl;
    // // std::cout << "b is " << b << std::endl;
    // // std::cout << "c is " << c << std::endl;
    
    // std::cout << "a is " << a.toFloat() << " as integer" << std::endl;
    // std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
    // std::cout << "c is " << c.toFloat() << " as integer" << std::endl;   
    return 0;
}