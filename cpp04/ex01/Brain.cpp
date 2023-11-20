/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:07:52 by shilal            #+#    #+#             */
/*   Updated: 2023/11/03 15:16:29 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain : Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "idea";
}

Brain::Brain(Brain const& clap){
    std::cout << "Brain : Copy Constructor called" << std::endl;
    *this = clap;
}

Brain& Brain::operator=(Brain const& a){
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = a.ideas[i];
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain : Destructor called" << std::endl;
}