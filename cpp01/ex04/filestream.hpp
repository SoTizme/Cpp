/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:46 by shilal            #+#    #+#             */
/*   Updated: 2023/10/06 16:53:00 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAM_HPP
#define FILESTREAM_HPP

#include <iostream>
#include <iomanip>
#include <fstream>

class replace {

        std::fstream file;
        std::string s1;
        std::string s2;
        
        public :
            replace(char *f_name, std::string str1, std::string str2);
            ~replace(void);
};

#endif