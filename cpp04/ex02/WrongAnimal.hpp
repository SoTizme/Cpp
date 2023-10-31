/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:51:05 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 15:53:50 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

    protected :
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(std::string n);
        WrongAnimal(WrongAnimal const& clap);
        WrongAnimal& operator=(WrongAnimal const& clap);
        ~WrongAnimal();

    std::string getType() const;
    void makeSound(void) const;
};

#endif