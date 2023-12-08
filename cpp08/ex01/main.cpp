/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:58:00 by shilal            #+#    #+#             */
/*   Updated: 2023/12/07 17:16:31 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    try {

        Span sp(6);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(1);
        sp.addNumber(11);

        
        // int arr[] = {10, 20};
        // int n = sizeof(arr)/sizeof(arr[0]);
        // const std::vector<int> vect(arr, arr+n);

        // sp.AddManyNumbers(vect);
        std::cout << "the short is : " << sp.shortestSpan() << std::endl;
        std::cout << "the longe is : "<< sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}
