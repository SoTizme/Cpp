/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:39:36 by shilal            #+#    #+#             */
/*   Updated: 2023/10/14 01:38:01 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

    Contact Tab[8];
    int          id;
    std::string  a;
    std::string  b;
    std::string  c;
    std::string  d;
    std::string  e;

    int len;

    public :
    
        PhoneBook(void);
        ~PhoneBook(void);

    void    ft_add(void);
    void    ft_search(void);
};

#endif