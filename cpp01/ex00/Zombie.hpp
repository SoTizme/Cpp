/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:11:57 by shilal            #+#    #+#             */
/*   Updated: 2023/09/30 23:14:25 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
    
    std::string name;
    
    public:
        Zombie(std::string str);
        ~Zombie(void);

    void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif