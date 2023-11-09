/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:05 by shilal            #+#    #+#             */
/*   Updated: 2023/11/09 17:42:27 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("AForm", 25,5){
    target = "leader";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm("AForm", 25,5){
    target = name;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& clap): AForm("AForm", 25,5){
    *this = clap;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& clap){
    target = clap.name;
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}