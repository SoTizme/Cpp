/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:35:58 by shilal            #+#    #+#             */
/*   Updated: 2023/10/26 12:27:33 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){

    std::cout << "DiamondTrap : Default Constructor called" << std::endl;
    Name = "Default";
    ClapTrap::Name = (Name + "_clap_name");
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string n){

    std::cout << "DiamondTrap : Paramiterz Constructor called" << std::endl;
    Name = n;
    ClapTrap::Name = (Name + "_clap_name");
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const& scav){
	std::cout << "DiamondTrap : Copy Constrocture called"<< std::endl;
	*this = scav;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& scav){
	std::cout << "DiamondTrap : Copy assignment operator called"<< std::endl;
	if (this != &scav)
	{
		Name = scav.Name;
		HitPoints = scav.HitPoints;
		EnergyPoints = scav.EnergyPoints;
		AttackDamage = scav.AttackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap : Deconstructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
   ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "My name is : " << Name << std::endl;
    std::cout << "ClapTrap name is : " << ClapTrap::Name << std::endl;
    
}