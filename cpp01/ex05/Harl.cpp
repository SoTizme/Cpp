/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:45:05 by shilal            #+#    #+#             */
/*   Updated: 2023/10/10 03:00:56 by shilal           ###   ########.fr       */
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

void    harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level){

    this->level = check_(level);

    switch (this->level)
    {
        case 1 : harl::debug();
                break;
        case 2 : harl::info();
                break;
        case 3 : harl::warning();
                break;
        case 4 : harl::error();
                break;
        default: std::cout << "Probably complaining about insignificant problems" <<std::endl;
    }
}