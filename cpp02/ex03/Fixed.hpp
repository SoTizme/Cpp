/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:52:47 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 16:00:18 by shilal           ###   ########.fr       */
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

        static Fixed const& min(Fixed const& class1, Fixed const& class2);
        static Fixed const& max(Fixed const& class1, Fixed const& class2);
        static Fixed& min(Fixed& class1, Fixed& class2);
        static Fixed& max(Fixed& class1, Fixed& class2);

        Fixed operator*(Fixed const& fclass);
        Fixed operator+(Fixed const& fclass);
        Fixed operator-(Fixed const& fclass);
        Fixed operator/(Fixed const& fclass);

        bool operator>(Fixed const& fclass)const;
        bool operator>=(Fixed const& fclass)const;
        bool operator<(Fixed const& fclass)const;
        bool operator<=(Fixed const& fclass)const;
        bool operator==(Fixed const& fclass)const;
        bool operator!=(Fixed const& fclass)const;
        
        Fixed& operator++(void);
        Fixed& operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fclass);

#endif