/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:08:31 by shilal            #+#    #+#             */
/*   Updated: 2023/12/08 18:28:15 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main(){
    int arr[4] = {0,55,8,80};
	std::vector <int> ptr;
	for (int i = 0; i < 4; i++) {
		ptr.push_back(arr[i]);
	}

	stdd::cout << "" << std::endl;
	try{
		easyfind(ptr, 0);
		easyfind(ptr, 100);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	char s[6] = "hilal";
	std::vector <char> str;
	for (int i = 0; i < 6; i++) {
		str.push_back(s[i]);
	}
	stdd::cout << "" << std::endl;
	try{
		easyfind(str, 'l');
		easyfind(str, 'i');
		easyfind(str, 'k');
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
}