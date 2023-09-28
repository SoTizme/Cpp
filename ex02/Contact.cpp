/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:01:33 by shilal            #+#    #+#             */
/*   Updated: 2023/09/28 18:50:10 by shilal           ###   ########.fr       */
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

	std::cout << "First Name : " << this->first_name << std::endl;
	std::cout << "Last Name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone Number : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
}