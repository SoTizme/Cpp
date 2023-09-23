#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

    Contact Tab[8];

    public :
        int          id;
        std::string  a;
        std::string  b;
        std::string  c;
        std::string  d;
        std::string  e;

        PhoneBook(void);
        ~PhoneBook(void);

    void    ft_add(void);
    void    ft_search(void);
};

#endif