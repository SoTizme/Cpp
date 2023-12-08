/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:53 by shilal            #+#    #+#             */
/*   Updated: 2023/12/08 18:44:57 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0){}

Span::Span(unsigned int n): N(n) {}

Span::Span(const Span &copy){ *this = copy; }

Span &Span::operator=(const Span &copy){
    if (this == &copy)
        return *this;
    arr = copy.arr;
    N = copy.N;
    return *this;
}

Span::~Span(){}

void Span::addNumber(int nb){
    if (arr.size() >= N)
        throw Span::FullVector();
    arr.push_back(nb);
}

int Span::longestSpan(void){
    if (arr.size() <= 1)
        throw Span::VoidVector();
    return (*max_element(arr.begin(), arr.end()) - (*min_element(arr.begin(), arr.end())));
}


int Span::shortestSpan(void){

    if (arr.size() <= 1)
        throw Span::VoidVector();

    std::vector<int> Sarr = arr;
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

void Span::AddManyNumbers(const std::vector<int> &ptr){

    if (ptr.size() > (N - arr.size()))
        throw Span::FullVector();
    arr.insert(arr.end(), ptr.begin(), ptr.end());
}