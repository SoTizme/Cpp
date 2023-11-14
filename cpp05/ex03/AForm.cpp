/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:11 by shilal            #+#    #+#             */
/*   Updated: 2023/11/13 20:19:22 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("leader"), gradeS(1), gradeE(1){
    statu = 0;
}

AForm::AForm(std::string n, int gs, int ge): name(n), gradeS(gs), gradeE(ge){
    statu = 0;
    if (gradeS < 1)
        throw GradeTooHighException();
    else if (gradeS > 150)
        throw GradeTooLowException();
    if (gradeE < 1)
        throw GradeTooHighException();
    else if (gradeE > 150)
        throw GradeTooLowException();
}

AForm::AForm(AForm const& clap): name(clap.name), gradeS(clap.gradeS), gradeE(clap.gradeE){
    statu = clap.statu;
}

AForm& AForm::operator=(AForm const& clap){
    this->statu = clap.statu;
    return (*this);
}

AForm::~AForm(){}

std::string AForm::getName() const { return (name);}

int AForm::getGradeS() const { return (gradeS); }

int AForm::getGradeE() const { return (gradeE); }

bool AForm::getStat() const { return (statu); }

void AForm::beSigned(Bureaucrat b){

    if (b.getGrade() <= gradeS)
        statu = true;
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "Out of Range: Grade too Low";
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Out of Range: Grade too High";
}

std::ostream &operator<<(std::ostream &output, const AForm &obj){
    output << obj.getName() << ", AForm sign grade is " << obj.getGradeS() 
    << ", AForm execute grade is " << obj.getGradeE();
    return (output);
}
