/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:05 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 12:17:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25,5){
    target = "leader";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm("PresidentialPardonForm", 25,5){
    target = name;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& clap): AForm(clap.getName(), clap.getGradeE(), clap.getGradeS()){
    *this = clap;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& clap){
    target = clap.target;
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{

    if (!getStat() || executor.getGrade() > this->getGradeE())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox"<<std::endl;
}
