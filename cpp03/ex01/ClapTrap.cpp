/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:10 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 13:48:45 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap : Default constructor called"<< std::endl;
	Name = "Default";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string n) : Name(n){
	std::cout << "ClapTrap : Paramiters Constrocture called"<< std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& clap){
	std::cout << "ClapTrap : Copy Constrocture called"<< std::endl;
	*this = clap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clap){
	std::cout << "ClapTrap : Copy assignment operator called"<< std::endl;
	if (this != &clap)
	{
		Name = clap.Name;
		HitPoints = clap.HitPoints;
		EnergyPoints = clap.EnergyPoints;
		AttackDamage = clap.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap : Deconstructor called"<< std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		std::cout << Name <<" attacks "<< target << ", causing "<< AttackDamage << " points of damage!"<< std::endl;
		EnergyPoints--;
	}
	else
		std::cout << Name <<" can't attack "<< target <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoints > 0 && EnergyPoints > 0){
		std::cout << Name << " Take a damege " << amount <<std::endl;
		if (amount <= HitPoints)
			HitPoints -= amount;
		else
			HitPoints = 0;
	}
	else
		std::cout << Name <<" can't take a dammege" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (HitPoints > 0 && EnergyPoints > 0){
		std::cout << Name << " beRepaired of " << amount <<std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << Name << " can't Repaired yourself" <<std::endl;
}