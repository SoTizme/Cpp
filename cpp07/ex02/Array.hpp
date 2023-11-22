/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:01:51 by shilal            #+#    #+#             */
/*   Updated: 2023/11/22 11:01:16 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

    T *arry;
    int len;

    public :
        Array(){
            arry = new T [0];
            len = 0;
        };
        Array(int n){
            len = n;
            arry = new T [n];
            for (int i = 0; i < n; i++)
                arry[i] = (T)('a' + i);
        }
        Array(Array const& tab){
            this->arry = new T [tab.len];
            this->len = tab.len;
            for (int i = 0; i < tab.len; i++)
                this->arry[i] = tab.arry[i];
        }
        Array& operator=(Array const& tab){
            delete [] this->arry;
            this->arry = new T [tab.len];
            this->len = tab.len;
            for (int i = 0; i < tab.len; i++)
                this->arry[i] = tab.arry[i];
            return(*this);
        }
        ~Array(){
            delete [] arry;
        };
    
    T operator[](int n){

        if (n > len || n < 0)
            throw ("Out Of Range");
        return arry[n];
 
    }
    
    int size(void);
};

#endif