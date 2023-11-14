/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:41 by shilal            #+#    #+#             */
/*   Updated: 2023/11/14 11:11:27 by shilal           ###   ########.fr       */
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

void Bureaucrat::signForm(AForm &f)
{
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << name << " couldn't sign " << f.getName() << " because " << e.what() << "." << std::endl;
    }
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

void Bureaucrat::executeForm(AForm const &form){

    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    } 
    
}