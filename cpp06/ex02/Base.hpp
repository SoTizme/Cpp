/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:58:13 by shilal            #+#    #+#             */
/*   Updated: 2023/11/19 19:49:35 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    public :
        virtual ~Base(){}
};

//  ---- Functions ----
Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif