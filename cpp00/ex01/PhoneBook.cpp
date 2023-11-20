/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:40:00 by shilal            #+#    #+#             */
/*   Updated: 2023/10/14 01:45:01 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

void    end_of_file(void){
    if (std::cin.eof())
		exit (0);
}

int    is_digit(std::string d){
    for (int i = 0; d[i]; i++)
	{
		if (isdigit(d[i]) == 0)
		{
			std::cout << "!     Error: Number Phone Is Not Digit     !" << std::endl;
			return (-1);
		}
	}
    return (1);
}

int	if_empty(std::string s){
	if (s == "")
	{
		std::cout << "!               Error: Empty              !" << std::endl;
		return (-1);	
	}
	return (1);
}

PhoneBook::PhoneBook(void) : id(0), len(0){

	std::cout << " __________________________________________" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|~~~~~~> Welecome To The PhoneBook <~~~~~~~|" << std::endl;
	std::cout << "|__________________________________________|" << std::endl;
	std::cout << "" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << " __________________________________________" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|~~~~~~~~~~~~~~> See U Soon <~~~~~~~~~~~~~~|" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|__________________________________________|" << std::endl;
}

void    PhoneBook::ft_add(void)
{
		std::cout << " __________________________________________" << std::endl;
		std::cout << "|                                          |" << std::endl;
		std::cout << "|             Enter New Contact            |" << std::endl;
		std::cout << "|__________________________________________|" << std::endl;
		while (1){
			std::cout << "Enter First name "<< std::endl; std::getline(std::cin, a); end_of_file();
			if (if_empty(a) == 1)
				break;
		}
		while (1){
			std::cout << "Enter Last name "<< std::endl; std::getline(std::cin, b); end_of_file();
			if (if_empty(b) == 1)
				break;
		}
		while (1){
			std::cout << "Enter Nickname "<< std::endl; std::getline(std::cin, c); end_of_file();
			if (if_empty(c) == 1)
				break;
		}
		while (1){
			std::cout << "Enter Phone number"<< std::endl; std::getline(std::cin, d); end_of_file();
			if (if_empty(d) == 1 && is_digit(d) == 1)
				break ;
		}
		while (1){
			std::cout << "Enter Darkest secret"<< std::endl; std::getline(std::cin, e); end_of_file();
			if (if_empty(e) == 1)
				break;
		}
	id %= 8;
	this->Tab[id].set_contact(id + 1, a, b, c, d, e);
	if (len < 8)
		len++;
	id++;
	std::cout << " __________________________________________" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|      The Contact ADD in Successfuly      |"<< std::endl;
	std::cout << "|__________________________________________|" << std::endl;
	return ;
}

void    PhoneBook::ft_search(void)
{
	std::string s;
    int nb;

    if (id == 0)
    {
        std::cout << "!        Error: Ther's NO Cantacts         !" << std::endl;
        return ;
    }
    for (int i = 0; i < len; i++){
        this->Tab[i].print_all_contact();
    }
	while (1)
	{
		std::cout << " __________________________________________" << std::endl;
		std::cout << "|                                          |" << std::endl;
		std::cout << "|          Enter Index of Cantact          |" << std::endl;
		std::cout << "|__________________________________________|" << std::endl;
		std::getline(std::cin, s); end_of_file();
		if (s.length() == 1 && s.find_first_not_of("12345678"))
		{
			nb = (int)(s[0] - 48) - 1;
			if (nb >= len)
			{
				std::cout << "!      Ther's no Cantact in this Index     !" << std::endl;
				return ;
			}	
			else
				return (this->Tab[nb].get_contact());
		}
		else
		{
			std::cout << "!    Error: Enter index between (1 -> 8)   !" << std::endl;
			continue ;
		}
	}
}