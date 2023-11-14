/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:14 by shilal            #+#    #+#             */
/*   Updated: 2023/11/13 19:10:27 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145,137){
    target = "leader";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm("ShrubberyCreationForm", 145, 137){
    target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& clap): AForm(clap.getName(), clap.getGradeE(), clap.getGradeS()){
    *this = clap;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& clap){
    target = clap.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
  
    if (!getStat() || executor.getGrade() > this->getGradeE())
        throw GradeTooLowException();
    else{
            std::ofstream file;
            file.open(target + "_shrubbery");
            if (!file.is_open())
                throw (std::ios_base::failure(target + "_shrubbery "));

            file    << "     ccee88oo\n"
                    << "  C8O8O8Q8PoOb o8oo\n"
                    << " dOB69QO8PdUOpugoO9bD\n"
                    << "CgggbU8OU qOp qOdoUOdcb\n"
                    << "    6OuU  /p u gcoUodpP\n"
                    << "      \\\\//  /douUP\n"
                    << "        \\\\////\n"
                    << "         |||/\\\n"
                    << "         |||\\/\n"
                    << "         |||||\n"
                    << "........//||||\\....\n";
            file.close();
    }
}
