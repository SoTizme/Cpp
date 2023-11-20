/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:20 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 17:03:38 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {

    public :
//  ----------- Canonical Forms -----------
        Intern();
        Intern(Intern const& clap);
        Intern& operator=(Intern const& clap);
        ~Intern();

//  ------------- custom exception class --------------
        class FromNotCreated: public std::exception{
            const char* what() const throw();
        };

//  ---- Members Functions ----
    AForm* robot(std::string str);
    AForm* presid(std::string str);
    AForm* shrub(std::string str);
    AForm* makeForm(std::string FormName, std::string name);
};

struct ST
{
    std::string str;
    AForm*  (Intern::*ptr)(std::string);
};

#endif