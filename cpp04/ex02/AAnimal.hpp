/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:43:55 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 18:28:32 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <cstdlib>

class AAnimal {

    protected :
        std::string type;

    public :
        AAnimal();
        AAnimal(std::string n);
        AAnimal(AAnimal const& clap);
        AAnimal& operator=(AAnimal const& clap);
        virtual ~AAnimal();

    std::string getType() const;
    virtual void makeSound(void) const = 0;
};

#endif