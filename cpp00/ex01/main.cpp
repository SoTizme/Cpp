/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:39:33 by shilal            #+#    #+#             */
/*   Updated: 2023/10/13 21:39:53 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

int main()
{
	PhoneBook p;
	std::string str;
 
	while(1)
	{
		std::cout << " __________________________________________" << std::endl;
		std::cout << "|                                          |" << std::endl;
		std::cout << "|        Use The Following Commnads        |"<< std::endl;
		std::cout << "|                                          |" << std::endl;
		std::cout << "|~~~~~~~~~~>|ADD| |SEARCH| |EXIT|<~~~~~~~~~|" << std::endl;
		std::cout << "|__________________________________________|" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (str.compare("ADD") == 0)
			p.ft_add();
		else if (str.compare("SEARCH") == 0)
			p.ft_search();
		else if (str.compare("EXIT") == 0)
			break ;
	}
}