/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:53 by shilal            #+#    #+#             */
/*   Updated: 2023/12/03 21:48:50 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0), Fixed(0){}

Span::Span(unsigned int n): N(n), Fixed(0){
    std::vector<int> arr;
    Sarr = arr;
}

Span::Span(const Span &copy){
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    arr = copy.arr;
    Sarr = copy.Sarr;
    N = copy.N;
    Fixed = copy.Fixed;
    return *this;
}

Span::~Span(){
}

void Span::addNumber(int nb){
    if (Fixed++ >= N)
        throw std::out_of_range("thers no place for Your Number, The vector is Full");
    arr.push_back(nb);
    Sarr.push_back(nb);
}

int Span::longestSpan(void){
    return (*max_element(arr.begin(), arr.end()) - (*min_element(arr.begin(), arr.end())));
}

int Span::shortestSpan(void){

    std::vector<int>::iterator it = Sarr.begin();
    sort(Sarr.begin(), Sarr.end());
    int nb = *it++;
    int result = *it - nb;
    
    while (it != Sarr.end()){
        if (result > (*it - nb))
            result = *it - nb;
        nb = *it++;
    }
    return (result);
}

