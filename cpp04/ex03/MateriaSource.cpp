/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:27 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:31:45 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    // std::cout << "MateriaSource : Constructor called" << std::endl;
     for (int i = 0; i < 4; i++)
        tmp[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& clap){
    // std::cout << "MateriaSource : Copy Constructor called" << std::endl;
    *this = clap;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& a){
    // std::cout << "MateriaSource : Copy assignment operator called" << std::endl;
    for (int i = 0; i < 4; i++)
        tmp[i] = a.tmp[i];
    return (*this);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        if (tmp[i])
            delete tmp[i];

    }
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (!tmp[i])
        {
            tmp[i] = m;
            break ;
        }
     }
}

AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (tmp[i] && (tmp[i]->getType() == type)){
            return (tmp[i]->clone());
        }
    }
    return 0;
}