/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:33:19 by shilal            #+#    #+#             */
/*   Updated: 2023/10/01 01:41:56 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std :: string str = "HI THIS IS BRAIN";
    std :: string *ptr = &str;
    std :: string& ref = str;

    
    std::cout << "The memory address of str : " << &str << std :: endl;
    std::cout << "The memory address of ptr : " << ptr << std :: endl;
    std::cout << "The memory address of res : " << &ref << std :: endl;


    std::cout << "The value of str : " << str << std :: endl;
    std::cout << "The value of ptr : " << *ptr << std :: endl;
    std::cout << "The value of ref : " << ref << std :: endl;
    
    return (0);
}