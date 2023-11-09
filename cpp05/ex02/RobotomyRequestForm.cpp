/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:10 by shilal            #+#    #+#             */
/*   Updated: 2023/11/09 22:50:51 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("AForm", 72,45){
    target = "leader";
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm("AForm", 72,45){
    target = name;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& clap): AForm("AForm", 72,45){
    *this = clap;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& clap){
    target = clap.target;
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}
