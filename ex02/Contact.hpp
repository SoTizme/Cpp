#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {


    public :
        void set_contact(int index, std::string a1, std::string b1, std::string c1, std::string d1, std::string e1);
        void get_contact(int index);
    int         index;
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkest_secret;
};

#endif