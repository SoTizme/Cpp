/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:11:57 by shilal            #+#    #+#             */
/*   Updated: 2023/09/29 15:50:03 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndfine ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
    
    std::string name;
    
    public:

        Zombie(void);
        ~Zombie(void);

    void announce(void);
    Zombie* newZombie(std::string name);
    void randomChump(std::string name);

};

#endif