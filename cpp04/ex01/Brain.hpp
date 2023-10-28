/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:08:33 by shilal            #+#    #+#             */
/*   Updated: 2023/10/28 18:16:21 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

     public :
        Brain();
        Brain(Brain const& clap);
        Brain& operator=(Brain const& clap);
        ~Brain();
    
    std::string ideas[100];
};

#endif