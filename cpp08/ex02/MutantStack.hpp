/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:42 by shilal            #+#    #+#             */
/*   Updated: 2023/12/08 18:09:23 by shilal           ###   ########.fr       */
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
            if (this == &copy)
                return (*this);
            this->c = copy.c;
            return (*this);
        }
        ~MutantStack(){};

    typedef typename std::stack<T>::container_type::iterator iterator;
    
    iterator begin(){ return this->c.begin(); }
    iterator end(){ return this->c.end(); }
};


#endif