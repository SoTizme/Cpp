/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:54:43 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 15:56:36 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    
    public :
        WrongCat();
        WrongCat(std::string n);
        WrongCat(WrongCat const& clap);
        WrongCat& operator=(WrongCat const& clap);
        ~WrongCat();

    void makeSound(void) const;
};

#endif