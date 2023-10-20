/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:11:57 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 02:38:12 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
    
    std::string name;
    
    public:
        Zombie(void);
        ~Zombie(void);

    void announce(void);
    void setname(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

#endif