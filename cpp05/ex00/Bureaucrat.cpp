/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:41 by shilal            #+#    #+#             */
/*   Updated: 2023/11/07 14:31:58 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("leader"){
    grade = 1;
}

Bureaucrat::Bureaucrat(std::string OneName, int OneGrade): name(OneName){
    if (OneGrade < 1)
        throw GradeTooHighException();
    else if (OneGrade > 150)
        throw GradeTooLowException();
    else
        grade = OneGrade;     
}

Bureaucrat::Bureaucrat(Bureaucrat const& clap): name(clap.name){
    *this = clap;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& clap){
    grade = clap.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade()const {
    return (grade);
}

void Bureaucrat::increment() {
    if ((grade - 1) < 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrement() {
    if ((grade + 1) > 150)
            throw GradeTooLowException();
    else
        grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Out of Range: Grade too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Out of Range: Grade too High";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj){
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (output);
}