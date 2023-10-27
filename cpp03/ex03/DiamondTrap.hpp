/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:35:54 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 22:23:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    
    private :
        std::string Name;

    public :
        DiamondTrap();
        DiamondTrap(std::string n);
        DiamondTrap(DiamondTrap const& scav);
        DiamondTrap& operator=(DiamondTrap const& scav);
        ~DiamondTrap();
    
        void attack(const std::string& target);
        void whoAmI();
        
};

#endif