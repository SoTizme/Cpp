/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:27:56 by shilal            #+#    #+#             */
/*   Updated: 2023/10/11 21:38:34 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int    check_(std::string str){
    
    if (str == "DEBUG")
        return (1);
    else if (str == "INFO")
        return (2); 
    else if (str == "WARNING")    
        return (3);
    else if (str == "ERROR")
        return (4);
    else
        return (-1);
}

void    Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<< std::endl;
    std::cout << "I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! "<< std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void){
     std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level){

    this->level = check_(level);

    switch (this->level)
    {
        case 1 : Harl::debug();
        case 2 : Harl::info();
        case 3 : Harl::warning();
        case 4 : Harl::error();
            break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
    }
}