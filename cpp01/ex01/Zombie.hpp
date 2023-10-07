/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:11:57 by shilal            #+#    #+#             */
/*   Updated: 2023/10/01 01:15:32 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
    
    std::string name;
    int index;
    
    public:
        Zombie(void);
        ~Zombie(void);

    void announce(void);
    void setname(std::string n, int i);
};

Zombie* zombieHorde( int N, std::string name );

#endif