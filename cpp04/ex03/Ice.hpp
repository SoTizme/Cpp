/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:23:03 by shilal            #+#    #+#             */
/*   Updated: 2023/11/01 16:22:41 by shilal           ###   ########.fr       */
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
    void use(ICharacter& target);
};

#endif