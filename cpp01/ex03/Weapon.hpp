/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:13:03 by shilal            #+#    #+#             */
/*   Updated: 2023/10/05 01:02:25 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon{

    std::string str;

    public :

        Weapon(std::string ne);
        ~Weapon(void){}

        const std::string getType(void);
        void setType(std::string s);
};

#endif