/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:29:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/20 17:12:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
// #include <iomanip>
#include <math.h>

class Fixed {

    int FixedPointInt;
    static const int nByt= 8;

    public :

        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &copy_class); 
        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream& output, const Fixed& fclass);

#endif