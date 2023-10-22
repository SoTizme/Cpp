/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:29:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 16:00:33 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {

    int FixedPoint;
    static const int nByt= 8;

    public :

        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &copy_class);
        ~Fixed();

        void setRawBits(int const raw);
        int getRawBits(void) const;
        float toFloat(void) const;
        int toInt(void) const;


        Fixed& operator=(Fixed const& fclass);
};

std::ostream &operator<<(std::ostream& output, const Fixed& fclass);

#endif