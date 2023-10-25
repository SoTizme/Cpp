/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:14:10 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 13:49:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called"<< std::endl;
	Name = "Default";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string n) : Name(n){
	std::cout << "Paramiters Constrocture called"<< std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& clap){
	std::cout << "Copy Constrocture called"<< std::endl;
	*this = clap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clap){
	std::cout << "Copy assignment operator called"<< std::endl;
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
	std::cout << "Deconstructor called"<< std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << Name <<" attacks "<< target << ", causing "<< AttackDamage << " points of damage!"<< std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << Name <<" can't attack "<< target <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoints > 0 && EnergyPoints > 0){
		std::cout << "ClapTrap " << Name << " Take a damege " << amount <<std::endl;
		if (amount <= HitPoints)
			HitPoints -= amount;
		else
			HitPoints = 0;
	}
	else
		std::cout << "ClapTrap " << Name <<" can't take a dammege" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (HitPoints > 0 && EnergyPoints > 0){
		std::cout << "ClapTrap " << Name << " beRepaired of " << amount <<std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << Name << " can't Repaired yourself" <<std::endl;
}