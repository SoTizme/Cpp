/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:37 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 17:01:58 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Bureaucrat Burea("Burea", 45);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        std::cout << "Sign " << rrf->getStat() << std::endl;
        Burea.signForm(*rrf);
        std::cout << "Sign " << rrf->getStat() << std::endl;
        Burea.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}