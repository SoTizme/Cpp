/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:11 by shilal            #+#    #+#             */
/*   Updated: 2023/11/10 19:21:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("leader"), gradeS(1), gradeE(1) {
    statu = 0;
}

Form::Form(std::string n, int gs, int ge): name(n), gradeS(gs), gradeE(ge){
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

Form::Form(Form const& clap): name(clap.name), gradeS(clap.gradeS), gradeE(clap.gradeE){
    statu = clap.statu;
}

Form& Form::operator=(Form const& clap){
    this->statu = clap.statu;
    return (*this);
}

Form::~Form(){}

std::string Form::getName() const { return (name);}

int Form::getGradeS() const { return (gradeS); }

int Form::getGradeE() const { return (gradeE); }

bool Form::getStat() const { return (statu); }

void Form::beSigned(Bureaucrat b){
    if (b.getGrade() <= gradeS)
        statu = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Form : Out of Range: Grade too Low";
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Form : Out of Range: Grade too High";
}

std::ostream &operator<<(std::ostream &output, const Form &obj){
    output << obj.getName() << ", form sign grade is " << obj.getGradeS() 
    << ", form execute grade is " << obj.getGradeE();
    return (output);
}
