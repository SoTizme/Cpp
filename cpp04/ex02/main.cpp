/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:20:27 by shilal            #+#    #+#             */
/*   Updated: 2023/10/31 17:53:45 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main() 
{
    const AAnimal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "==============================" << std::endl;

    j->makeSound();
    i->makeSound();

    std::cout << "==============================" << std::endl;
    delete j;
    delete i;

    return 0;
}
