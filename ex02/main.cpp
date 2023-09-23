#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->id = 0;
   std::cout << "-----------------------------\n";
   std::cout << "--Welecome To The PhoneBook--\n";
   std::cout << "-----------------------------\n";
}

PhoneBook::~PhoneBook(void)
{
   std::cout << "-----------------------------\n";
   std::cout << "-----------Good by-----------\n";
   std::cout << "-----------------------------\n";
}

void    PhoneBook::ft_search(void)
{

}

void Contact::set_contact(int id, std::string a, std::string b, std::string c, std::string d, std::string e)
{
	this->index =  id;
	this->first_name = a;
	this->last_name = b;
	this->nickname = c;
	this->phone_number = d;
	this->darkest_secret = e;
}

void Contact::get_contact(int index){

}

void    PhoneBook::ft_add(void)
{
	std::cout << "Enter first name >>"; getline(std::cin, a);
	std::cout << "Enter last name >>"; getline(std::cin, b);
	std::cout << "Enter nickname >>"; getline(std::cin, c);
	std::cout << "Enter  phone number >>"; getline(std::cin, d);
	std::cout << "Enter darkest secret >>"; getline(std::cin, e);
	if (PhoneBook::a == "" || PhoneBook::b == "" || PhoneBook::c == "" 
		|| PhoneBook::d == "" || PhoneBook::e == "")
		std::cout << "--------------Empty filed---------------\n";
	else
	{
		this->id %= 8;
		this->Tab[this->id].set_contact(this->id, a, b, c, d, e);
		this->id++;
	}
	return ;
}

void    PhoneBook::ft_search(void)
{
	std::string s;
	std::cout << "Enter The index of the Cantact>>"; getline(std::cin, s);
	for (,)
}

int main()
{
	PhoneBook p;
	std::string str;

	std::cout << "----------------------------------------\n";
	std::cout << "To Save a contact Use this : ADD\n";
	std::cout << "To Serch for a contact Use this : SEARCH\n";
	std::cout << "To Quit Use this : EXIT\n";
	while(1)
	{
		std::cout << "----------------------------------------\n";
		std::cout << "Tap your command >>";
		std:: getline(std::cin, str);
		if (str.compare("ADD") == 0)
			  p.ft_add();
		else if (str.compare("SEARCH") == 0)
			std :: cout << "SEARCH\n";
		else if (str.compare("EXIT") == 0)
			break ;
	}
}