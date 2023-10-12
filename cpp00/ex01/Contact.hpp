/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:39:39 by shilal            #+#    #+#             */
/*   Updated: 2023/10/11 22:22:30 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {

    private :
        int         index;
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;

    public :
        void set_contact(int index, std::string a1, std::string b1, std::string c1, std::string d1, std::string e1);
        void print_all_contact(void);
        void get_contact(void);

};

#endif