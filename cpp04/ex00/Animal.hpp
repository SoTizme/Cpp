/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:57 by shilal            #+#    #+#             */
/*   Updated: 2023/10/27 19:01:10 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

    protected :
        std::string type;

    public :
        Animal();
        Animal(std::string n);
        Animal(Animal const& clap);
        Animal& operator=(Animal const& clap);
        virtual ~Animal();

    std::string getType() const;
    virtual void makeSound(void) const;
};

#endif