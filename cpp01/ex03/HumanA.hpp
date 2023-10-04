/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:40 by shilal            #+#    #+#             */
/*   Updated: 2023/10/04 02:17:09 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {

    std::string str;
    Weapon *ptr_type;

    public :

        HumanA(std::string s, Weapon &am);
        ~HumanA(void);

        void attack(void);
};


#endif