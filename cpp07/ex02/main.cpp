/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:02:25 by shilal            #+#    #+#             */
/*   Updated: 2023/11/22 11:16:41 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> int Array<T>::size(void){
    return len;
}

int main(){
    Array <int>a(9);
    Array <int>B(2);
    a = B;

    try{
        std::cout << a[5] << std::endl;
    }
    catch(const char *e){
        std::cerr << "Exception " << e << std::endl;
    }
    
    return 0;
}
