/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:58:09 by shilal            #+#    #+#             */
/*   Updated: 2023/11/19 20:00:07 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){

    Base *ptr;

    ptr = generate();

    identify(*ptr); // by reffrence
    identify(ptr); // by pointer

    delete ptr;
    return 0;
}