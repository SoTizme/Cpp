/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:08 by shilal            #+#    #+#             */
/*   Updated: 2023/10/26 12:27:02 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap : Default Constructer called" << std::endl; 
    Name = "Default";
    HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string n){
    std::cout << "FragTrap : Paramiter Constructer called" << std::endl;  
    Name = n;
    HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& flag){
	std::cout << "FragTrap : Copy Constrocture called"<< std::endl;
	*this = flag;
}

FragTrap& FragTrap::operator=(FragTrap const& flag){
	std::cout << "FragTrap : Copy assignment operator called"<< std::endl;
	if (this != &flag)
	{
		Name = flag.Name;
		HitPoints = flag.HitPoints;
		EnergyPoints = flag.EnergyPoints;
		AttackDamage = flag.AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap : Deconstructer called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << std::endl;
    std::cout << "FragTrap say High fives guys" << std::endl;
	std::cout << std::endl;
}