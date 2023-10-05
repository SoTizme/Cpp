/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:06:52 by shilal            #+#    #+#             */
/*   Updated: 2023/10/05 01:03:03 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {

    std::string str;
    Weapon *ptr_type;

    public :

        HumanB(std::string s);
        ~HumanB(void){}

    void attack(void);
    void setWeapon(Weapon& wepn);
};


#endif