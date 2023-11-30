/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:56 by shilal            #+#    #+#             */
/*   Updated: 2023/11/30 19:03:28 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span{
    
    std::vector<int> arr;
    unsigned int N;
    unsigned int Fixed;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
    
    void addNumber(int nb);
    int shortestSpan(void);
    int longestSpan(void);
    
    
    void print(){
        std::vector<int>::iterator t = arr.begin();
        while (t != arr.end())
        {
            std::cout << *t << std::endl;
            t++;
        }
        
    }
};

#endif
