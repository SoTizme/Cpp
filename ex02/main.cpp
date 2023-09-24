#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->id = 0;

	std::cout << "_________________________________________" << std::endl;
	std::cout << "~~~~~~> Welecome To The PhoneBook <~~~~~~" << std::endl;
	std::cout << "" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
   std::cout << "-----------------------------" << std::endl;
   std::cout << "-----------Good by-----------" << std::endl;
   std::cout << "-----------------------------" << std::endl;
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

void    PhoneBook::ft_add(void)
{
	std::cout << "Enter first name >>"; getline(std::cin, a);
	std::cout << "Enter last name >>"; getline(std::cin, b);
	std::cout << "Enter nickname >>"; getline(std::cin, c);
	std::cout << "Enter  phone number >>"; getline(std::cin, d);
	std::cout << "Enter darkest secret >>"; getline(std::cin, e);
	for (int i = 0; d[i]; i++)
	{
		if (isdigit(d[i]) == 0)
		{
			std::cout << "----------Error in Number Phone---------" << std::endl;
			return ;
		}
	}
	if (PhoneBook::a == "" || PhoneBook::b == "" || PhoneBook::c == "" 
		|| PhoneBook::d == "" || PhoneBook::e == "")
		std::cout << "--------------Empty filed---------------"<< std::endl;
	else
	{
		this->id %= 8;
		this->Tab[this->id].set_contact(this->id, a, b, c, d, e);
		this->id++;
		std::cout << "------The Contact ADD in Successfuly------"<< std::endl;
	}
	return ;
}

void    PhoneBook::ft_search(void)
{
	std::string s;
	int	nb;

	std::cout << "----------------------------------------"<< std::endl;
	std::cout << "Number of the Cantact >> "; getline(std::cin, s);
	if (s.length() == 1 && s.find_first_not_of("0123456789"))
	{
		std::cout << "its integer" << std::endl;
		for (int i=0; s[i]; i++){
			std::cout << s[i] << std::endl;
			if (int(s[0] - 48) == this->Tab[i].index)
				std::cout << "hiii" << std::endl;
		}
	}
	else
		std::cout << "----------------------------------------"<< std::endl;
		std::cout << "------------Ther's NO Inedex------------"<< std::endl;
}

int main()
{
	PhoneBook p;
	std::string str;

	std::cout << "-------Use The Following Commnads-------"<< std::endl;
	std::cout << "~~~~~~~~>|ADD|--|SEARCH|--|EXIT|<~~~~~~~" << std::endl;
	while(1)
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Tap your command >> ";
		std:: getline(std::cin, str);
		if (str.compare("ADD") == 0)
			p.ft_add();
		else if (str.compare("SEARCH") == 0)
			p.ft_search();
		else if (str.compare("EXIT") == 0)
			break ;
	}
}