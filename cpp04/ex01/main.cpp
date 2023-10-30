/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:20:27 by shilal            #+#    #+#             */
/*   Updated: 2023/10/30 23:09:01 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    Cat a;
    Cat f = a;
    a = f;
    // delete j;
    // delete i;

    return 0;
}
