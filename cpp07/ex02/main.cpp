/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:02:25 by shilal            #+#    #+#             */
/*   Updated: 2023/11/24 10:20:45 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){

    int Max= 750;

    Array<char> numbers(Max);
    char* mirror = new char[Max];

    char a = 'a';
    for (int i = 0; i < Max; i++){
        numbers[i] = a;
        mirror[i] = a;
        a++;
        if (a > 'z')
            a = 'a';
    }
    
    {
        Array<char> tmp = numbers;
        Array<char> test(tmp);
    }

    try{
        numbers[-2] = 0;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try{
        numbers[Max] = 0;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < Max; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    delete [] mirror;
    return 0;
}
