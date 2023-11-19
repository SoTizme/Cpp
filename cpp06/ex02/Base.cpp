/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:54 by shilal            #+#    #+#             */
/*   Updated: 2023/11/19 19:59:38 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void){

    int i = std::time(NULL) % 3;
    if (i == 1)
        return (new A);
    else if (i == 2)
        return (new B);
    else
        return (new C);
}

void identify(Base* p){
    if (p){
        if (dynamic_cast<A*>(p))
            std::cout << "Type of the object pointed is A" << std::endl;
        else if (dynamic_cast<B*>(p))
                std::cout << "Type of the object pointed is B" << std::endl;
        else if (dynamic_cast<C*>(p))
                std::cout << "Type of the object pointed is C" << std::endl;
        else
            std::cout << "Type of the object pointed is NON" << std::endl;
    }
    else
      std::cout << "Type of the object pointed is NULL" << std::endl;

}

void identify(Base& p){

    try{
        A &tmp_a = dynamic_cast<A&>(p);
        std::cout << "Type of the object pointed is A" << std::endl;
        (void)tmp_a;
    }
    catch(const std::exception& e){
        try {
            B &tmp_b = dynamic_cast<B&>(p);
            std::cout << "Type of the object pointed is B" << std::endl;
            (void)tmp_b;
        }
        catch(const std::exception& e){
            try{
                C &tmp_c = dynamic_cast<C&>(p);
                std::cout << "Type of the object pointed is C" << std::endl;
                (void)tmp_c;
            }
            catch(const std::exception& e){
                std::cout << "Type of the object pointed is NON" << std::endl;
            }
        }
    }   
}