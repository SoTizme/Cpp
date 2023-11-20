/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:37 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 16:53:39 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat a("hilal", 19);
        Form c("souad", 19, 2);
        std::cout << c << std::endl;
        a.signForm(c);
        a.decrement();
        std::cout << c << std::endl;
        std::cout << a << std::endl;
        a.signForm(c);

    }
    catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}