/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:40:00 by shilal            #+#    #+#             */
/*   Updated: 2023/09/27 01:27:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    end_of_file(void){
    if (std::cin.eof())
			exit (0);
}

int    is_digit(std::string d){
    std::cout << "RUN" << std::endl;
    for (int i = 0; d[i]; i++)
	{
		if (isdigit(d[i]) == 0)
			return (-1);
	}
    return (1);
}

PhoneBook::PhoneBook(void){
	this->id = 0;
	this->i = 0;

	std::cout << "_________________________________________" << std::endl;
	std::cout << "~~~~~~> Welecome To The PhoneBook <~~~~~~" << std::endl;
	std::cout << "" << std::endl;
}

PhoneBook::~PhoneBook(void){
   std::cout << "-----------------------------" << std::endl;
   std::cout << "-----------Good by-----------" << std::endl;
   std::cout << "-----------------------------" << std::endl;
}

void    PhoneBook::ft_add(void)
{
	std::cout << "Enter First name >>"<< std::endl; getline(std::cin, a); end_of_file();
	std::cout << "Enter Last name >>"<< std::endl; getline(std::cin, b); end_of_file();
	std::cout << "Enter Nickname >>"<< std::endl; getline(std::cin, c); end_of_file();
	std::cout << "Enter Phone number >>"<< std::endl; getline(std::cin, d); end_of_file();
    if (is_digit(d) == -1)
    {
        std::cout << "---------Number Phone Isnt a digit--------" << std::endl;
        std::cout << "------------------------------------------"<< std::endl;
        return ;
    }
	std::cout << "Enter Darkest secret >>"<< std::endl; getline(std::cin, e); end_of_file();
	if (PhoneBook::a == "" || PhoneBook::b == "" || PhoneBook::c == "" || PhoneBook::d == "" || PhoneBook::e == "")
		std::cout << "--------------Empty filed---------------"<< std::endl;
	else
	{
		this->id %= 8;
        std::cout << this->id << std::endl;
		this->Tab[this->id].set_contact(this->id + 1, a, b, c, d, e);
        if (this->i < 8)
            this->i++;
        this->id++;
        std::cout << "=========== "<< this->id << std::endl;
		std::cout << "------The Contact ADD in Successfuly------"<< std::endl;
        std::cout << "------------------------------------------"<< std::endl;
	}
	return ;
}

void    PhoneBook::ft_search(void)
{
	std::string s;
    int nb;

    if (id == 0)
    {
        std::cout << "------------Ther's NO Cantacts------------"<< std::endl;
        std::cout << "------------------------------------------"<< std::endl;
        return ;
    }
    for (int i = 0; i < this->i; i++){
        this->Tab[i].print_all_contact();
    }
	std::cout << "----------------------------------------"<< std::endl;
	std::cout << "Number of the Cantact >> "; getline(std::cin, s); end_of_file();
	if (s.length() == 1 && s.find_first_not_of("12345678"))
	{
        nb = (int)(s[0] - 48) - 1;
        this->Tab[nb].get_contact();
	}
	else
		std::cout << "------------Ther's NO Inedex------------"<< std::endl;
}