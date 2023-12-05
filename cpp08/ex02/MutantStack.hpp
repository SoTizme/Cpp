/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:42 by shilal            #+#    #+#             */
/*   Updated: 2023/12/05 23:25:59 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{

    public :
        MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack& operator=(const MutantStack& copy);
        ~MutantStack();

};

template <typename T> MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy): std::stack<T>(copy){}

template <typename T> 
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy){
    (void)copy;
    return (*this);
}

template <typename T> MutantStack<T>::~MutantStack(){}

#endif