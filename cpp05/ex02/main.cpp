/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:37 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 18:51:00 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat b("hilal",1);
		std::cout << b << std::endl;
		
		std::cout << std::endl;
		
		PresidentialPardonForm p("soaud");
		std::cout << p << std::endl;
		b.signForm(p);
		std::cout << p << std::endl;
		b.executeForm(p);
	
		std::cout << std::endl;
		
		RobotomyRequestForm r("Robot");
		std::cout << r << std::endl;
		b.signForm(r);
		std::cout << r << std::endl;
		b.executeForm(r);


		std::cout << std::endl;
		
		ShrubberyCreationForm s("nana");
		std::cout << s << std::endl;
		b.signForm(s);
		std::cout << s << std::endl;
		b.executeForm(s);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}