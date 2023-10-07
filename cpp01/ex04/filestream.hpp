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
#include <sys/stat.h>

class replace {

        std::ifstream file;
        std::ofstream r_file;
        std :: string name;
        
        public :
            replace(std::string f_name, std::string str1, std::string str2);
            ~replace(void);

        bool open_files();
        
};

#endif