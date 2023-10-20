/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:26:48 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 08:58:46 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    if (N <= 0){
        std::cerr << "U Cant use a '0' or negative N" << std::endl;
        exit (1);
    }

    Zombie *tap = new Zombie[N];

    for(int i = 0; i < N; i++)
        tap[i].setname(name);

    return (tap);
}