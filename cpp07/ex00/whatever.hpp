/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:33:18 by shilal            #+#    #+#             */
/*   Updated: 2023/11/21 15:49:18 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename K>
K min(K a, K b){
    if (a > b)
        return a;
    return b;
}

template <typename I>
I max(I a, I b){
    if (a < b)
        return a;
    return b;
}

#endif