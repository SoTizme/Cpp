/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:36:26 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 13:48:25 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap : Default Constructor called" << std::endl;
    
    Name = "Default";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string n){
    std::cout << "ScavTrap : Paramiterz Constructor called" << std::endl;
    Name = n;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& scav){
	std::cout << "ScavTrap : Copy Constrocture called"<< std::endl;
	*this = scav;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scav){
	std::cout << "ScavTrap : Copy assignment operator called"<< std::endl;
	if (this != &scav)
	{
		Name = scav.Name;
		HitPoints = scav.HitPoints;
		EnergyPoints = scav.EnergyPoints;
		AttackDamage = scav.AttackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap : Deconstructor called" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << std::endl;
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
    std::cout << std::endl;
}