/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:39:33 by shilal            #+#    #+#             */
/*   Updated: 2023/09/27 03:25:29 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	if_dot(std::string str){
	if (str.length() > 9)
		return (str.substr(0, 10).replace(9, 10, "."));
	return (str);
}

void Contact::set_contact(int id, std::string a, std::string b, std::string c, std::string d, std::string e){
	this->index =  id;
	this->first_name = a;
	this->last_name = b;
	this->nickname = c;
	this->phone_number = d;
	this->darkest_secret = e;
}

void	Contact::print_all_contact(void){
	std::cout << std::setw(10) << this->index << "|";
	std::cout << std::setw(10) << if_dot(this->first_name) << "|";
	std::cout << std::setw(10) << if_dot(this->last_name) << "|";
	std::cout << std::setw(10) << if_dot(this->nickname) << "|";
	std::cout << std::endl;
}

void Contact::get_contact(void){
	if (this->first_name == "")
		std::cout << "Ther's no Cantact in this Index" << std::endl;
	else
	{
		std::cout << this->first_name << std::endl;
		std::cout << this->last_name << std::endl;
		std::cout << this->nickname << std::endl;
		std::cout << this->phone_number << std::endl;
		std::cout << this->darkest_secret << std::endl;
	}
}

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
		std:: getline(std::cin, str);
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