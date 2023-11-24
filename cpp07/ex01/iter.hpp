/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:34:48 by shilal            #+#    #+#             */
/*   Updated: 2023/11/22 09:00:27 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void print(T a){
    std::cout << a << std::endl;
};

template <typename I, typename T> 
void iter (I *ptr, int len, void (*func_print)(T)){
    if (len < 0){
        std::cerr << "Invalid argument : lenght" << std::endl;
        return ;
    }
    if (!ptr){
        std::cerr << "Invalid argument : array NULL" << std::endl;
        return ;
    }
    for (int i = 0; i < len; i++)
        func_print(ptr[i]);
}

#endif