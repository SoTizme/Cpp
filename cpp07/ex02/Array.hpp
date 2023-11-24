/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:01:51 by shilal            #+#    #+#             */
/*   Updated: 2023/11/24 10:21:41 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

    T *arry;
    unsigned int len;

    public :
        Array();
        Array(unsigned int n);
        Array(Array const& tab);
        Array& operator=(Array const& tab);
        ~Array();

    T &operator[](int n);
    unsigned int size(void);
};

template <typename T>
Array<T>::Array() : len(0) { 
    arry = new T [0];
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n){
    arry = new T [n];
    for (size_t i = 0; i < n; i++)
        arry[i] = 0;
}

template <typename T>
Array<T>::Array(Array const& tab){
    this->arry = new T [1];
    *this = tab;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const& tab){
    delete [] this->arry;
    this->arry = new T [tab.len];
    this->len = tab.len;
    for (size_t i = 0; i < tab.len; i++)
        this->arry[i] = tab.arry[i];
    return(*this);
}

template <typename T>
Array<T>::~Array(){ delete [] arry; }

template <typename T>
T& Array<T>::operator[](int n)
{
    if (n < 0 || ((unsigned int)n >= len))
        throw std::out_of_range("Out Of Range");
    return arry[n];
}

template <typename T>  
inline unsigned int Array<T>::size(void){
    return len;
}

#endif
