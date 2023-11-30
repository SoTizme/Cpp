/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:53 by shilal            #+#    #+#             */
/*   Updated: 2023/11/30 19:37:00 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0), Fixed(0){}

Span::Span(unsigned int n): N(n), Fixed(0){
    std::vector<int> tmp(n);
    arr = tmp;
}

Span::Span(const Span &copy){
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    N = copy.N;
    Fixed = copy.Fixed;
    return *this;
}

Span::~Span(){
}

void Span::addNumber(int nb){
    std::vector<int>::iterator it = arr.begin() + Fixed;
    if (Fixed++ >= N)
        throw std::out_of_range("thers no place for Your Number, The vector is Full");
    *it = nb;
}

int Span::longestSpan(void){

    int j = *max_element(arr.begin(), arr.end());
    int i = *min_element(arr.begin(), arr.end());
    return (j - i);
}

int Span::shortestSpan(void){
    int space = 0;
    int Fspace = 0;
    std::vector<int>::iterator it = arr.begin();
    space = *it;
   while (it++ != arr.end()){
        space -= *it;
        std::cout << space << std::endl;
        if (space >= 0 && Fspace < space)
            Fspace = space;
        space = *it;

    }

    return Fspace;
}

