/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:42 by shilal            #+#    #+#             */
/*   Updated: 2023/12/06 17:43:47 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{

    public :
        MutantStack(){}
        MutantStack(const MutantStack& copy): std::stack<T>(copy){}
        MutantStack& operator=(const MutantStack& copy){
            this->c = copy.c;
            return (*this);
        }
        ~MutantStack(){};
    
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){ return this->c.begin(); }

    iterator end(){ return this->c.end(); }
};


#endif