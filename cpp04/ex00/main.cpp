/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:20:27 by shilal            #+#    #+#             */
/*   Updated: 2023/11/03 16:15:15 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << "WrongCat type: " << wrong_cat->getType() << std::endl;
    wrong_cat->makeSound();
  
    delete wrong_cat;
    delete i;
    delete j;
    delete meta;

    return 0;
}
