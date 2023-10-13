/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:28:41 by shilal            #+#    #+#             */
/*   Updated: 2023/10/13 03:47:18 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <fstream>

class Harl {

    private:

        int step;    
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
};

#endif