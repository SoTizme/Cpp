/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:23:03 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 19:39:50 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

    public:
        Ice();
        Ice(Ice const& a);
        Ice& operator=(Ice const& a);
        ~Ice();

    AMateria* clone() const;
    // void use(ICharacter& target);
};

#endif