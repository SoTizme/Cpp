/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:42:20 by shilal            #+#    #+#             */
/*   Updated: 2023/10/11 21:26:58 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <fstream>

class Harl {

    private:

        int level;    
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public :
        void complain(std::string level);
        
};

#endif