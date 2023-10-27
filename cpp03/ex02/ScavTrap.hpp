/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:36:30 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 14:52:32 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public :
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(ScavTrap const& scav);
        ScavTrap& operator=(ScavTrap const& scav);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif