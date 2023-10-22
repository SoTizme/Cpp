/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:29:02 by shilal            #+#    #+#             */
/*   Updated: 2023/10/22 19:31:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>


class Fixed {
  
    int FixedPoint;
    static const int nByte = 8;
    
    public :
        Fixed();
        ~Fixed();
        Fixed(Fixed &copy_class);
        Fixed& operator=(Fixed const& fclass);

        int getRawBits(void) const;
        void setRawBits(int n);
};

#endif