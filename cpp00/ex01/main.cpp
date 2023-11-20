/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:39:33 by shilal            #+#    #+#             */
/*   Updated: 2023/10/14 03:24:55 by shilal           ###   ########.fr       */
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
		if (str == "ADD")
			p.ft_add();
		else if (str == "SEARCH")
			p.ft_search();
		else if (str == "EXIT")
			break ;
	}
}