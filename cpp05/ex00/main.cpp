/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:37 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 16:53:33 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a;
        std::cout << a << std::endl;
        std::cout << "Increment The bureaucrat Grade of >> "<< a.getName() << std::endl;
        a.increment();
        std::cout << a << std::endl;
    }
    catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}