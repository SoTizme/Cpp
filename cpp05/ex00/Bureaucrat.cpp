/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:41 by shilal            #+#    #+#             */
/*   Updated: 2023/11/04 21:21:08 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string OneName, int OneGrade): name(OneName){
    try{
        if (OneGrade < 1 || OneGrade > 150)
            OutRange(OneGrade);
        grade = OneGrade;
    }  
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const& clap){
    *this = clap;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& clap){
    grade = clap.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const{
    return (name);
}

int Bureaucrat::getGrade()const{
    return (grade);
}

void Bureaucrat::OutRange(int nb){
    if (nb < 1)
        throw low();
    throw high();
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj){
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (output);
}