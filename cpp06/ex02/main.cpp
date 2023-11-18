/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:58:09 by shilal            #+#    #+#             */
/*   Updated: 2023/11/18 19:39:25 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(){

    Base *ptr;
    for (size_t i = 0; i < 5; i++)
    {
        ptr = generate();
        identify(*ptr);
        identify(ptr);
    }

    delete ptr;
    return 0;
}