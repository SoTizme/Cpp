/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:22:18 by shilal            #+#    #+#             */
/*   Updated: 2023/10/30 22:54:58 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    Brain *c;

    public :
        Cat();
        Cat(std::string n);
        Cat(Cat const& clap);
        Cat& operator=(Cat const& clap);
        ~Cat();

    void makeSound(void) const;
};

#endif