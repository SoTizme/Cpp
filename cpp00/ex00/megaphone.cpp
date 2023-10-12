/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 04:37:50 by shilal            #+#    #+#             */
/*   Updated: 2023/10/12 05:03:51 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void to_uper(char *s){
	for (int i = 0; s[i] ; i++)
		std::cout << (char)toupper(s[i]);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else{
		for (int j = 1; j < ac; j++)
			to_uper(av[j]);
		std::cout << std::endl;
	}
}
