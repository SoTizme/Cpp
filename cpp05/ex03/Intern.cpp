/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:17 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 15:42:23 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(Intern const &clap){
    *this = clap;
}

Intern& Intern::operator=(Intern const &clap){
    (void)clap;
    return (*this);
}

Intern::~Intern(){
}

const char* Intern::FromNotCreated::what() const throw(){
    return "The FormName Not Found";
}

AForm *Intern::robot(std::string str) {
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
    return (new RobotomyRequestForm(str));
}

AForm *Intern::presid(std::string str) {
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
    return (new PresidentialPardonForm(str));
}

AForm *Intern::shrub(std::string str) {
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
    return (new ShrubberyCreationForm(str));
}

AForm* Intern::makeForm(std::string FormName, std::string name)
{
    ST tab[3] = {{"presidential pardon", &Intern::presid}, {"robotomy request", &Intern::robot}, {"shrubbery creation", &Intern::shrub}};
    for (int i = 0; i < 3; i++){
        if (FormName == tab[i].str)
            return ((this->*tab[i].ptr)(name));
    }
    throw FromNotCreated();
}
