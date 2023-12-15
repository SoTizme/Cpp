/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:42 by shilal            #+#    #+#             */
/*   Updated: 2023/12/09 13:44:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>{

    public :
        MutantStack(){}
        MutantStack(const MutantStack& copy): std::stack<T, container>(copy){}
        MutantStack& operator=(const MutantStack& copy){
            if (this == &copy)
                return (*this);
            this->c = copy.c;
            return (*this);
        }
        ~MutantStack(){};

    typedef typename container::iterator iterator;
    typedef typename container::const_iterator const_iterator;

    iterator begin(){ return this->c.begin(); }
    iterator end(){ return this->c.end(); }
    
    const_iterator cbegin()const { return this->c.cbegin(); }
    const_iterator cend()const { return this->c.cend(); }
};


#endif