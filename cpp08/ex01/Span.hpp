/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:56 by shilal            #+#    #+#             */
/*   Updated: 2023/12/04 18:39:56 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span{
    
    std::vector<int> arr;
    unsigned int N;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
    
    void addNumber(int nb);
    int shortestSpan(void);
    int longestSpan(void);
    void AddManyNumbers(const std::vector<int> &ptr);
    
        class VoidVector : public std::exception{
            public:
                const char* what() const throw() {
                    return ("Ther's One/No element in the vector");
                }
        };
        
        class FullVector : public std::exception{
            public:
                const char* what() const throw() {
                    return ("thers no place for Your Number, The vector is Full");
                }
        };
};

#endif
