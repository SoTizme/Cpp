/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:28:32 by shilal            #+#    #+#             */
/*   Updated: 2023/11/01 16:30:18 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_HPP
#define CUBE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

    public:
        Cure();
        Cure(Cure const& a);
        Cure& operator=(Cure const& a);
        ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif