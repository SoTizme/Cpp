/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:17 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 18:13:39 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm{

    std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm const& clap);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& clap);
        ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor)const;
};

#endif