/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:10 by shilal            #+#    #+#             */
/*   Updated: 2023/11/13 19:26:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72,45){
    target = "leader";
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm("RobotomyRequestForm", 72,45){
    target = name;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& clap): AForm(clap.getName(), clap.getGradeE(), clap.getGradeS()){
    *this = clap;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& clap){
    target = clap.target;
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{

    int t;
    if (!getStat() || executor.getGrade() > this->getGradeE())
        throw GradeTooLowException();
    else {
        t = time(NULL);
        if (t == -1)
            throw std::ios_base::failure("time() Fail");
        else if (t % 2)
            std::cout << target <<" has been robotomized successfully" << std::endl;
        else
            std::cout << target << " Robotomy Fail" << std::endl;
    }
}
