/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:20:59 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 14:04:18 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    Brain *d;

    public :

        Dog();
        Dog(std::string n);
        Dog(Dog const& clap);
        Dog& operator=(Dog const& clap);
        ~Dog();

    void makeSound(void) const;
};

#endif