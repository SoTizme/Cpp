/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:02:53 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 19:22:14 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
    std::string type;

    public:
        AMateria();
        AMateria(std::string const& type);
        AMateria(AMateria const& a);
        AMateria& operator=(AMateria const& a);
        ~AMateria();
        

    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    // virtual void use(ICharacter& target);
};

#endif