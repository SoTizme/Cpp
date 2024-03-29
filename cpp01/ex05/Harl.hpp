/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:42:20 by shilal            #+#    #+#             */
/*   Updated: 2023/10/13 03:42:48 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <fstream>

class Harl {

    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public :
        void complain(std::string level);
        
};

struct ST
{
    std::string name;

    void (Harl::*ptr)(void);
};


#endif