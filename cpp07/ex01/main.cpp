/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:35:24 by shilal            #+#    #+#             */
/*   Updated: 2023/11/29 14:41:15 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){

    {
        ç
        iter<int , int>(arr, 3, print);
    }
    std::cout << "-----------------" << std::endl;
    {
        char arr[6] = "hilal";
        iter<char , char>(arr, 5, print);
    }
    std::cout << "-----------------" << std::endl;  
    {
        double arr[3] = {4.55, 8.94, 9.01};
        iter<double , double>(arr, 3, print);
    }

    return 0;
}