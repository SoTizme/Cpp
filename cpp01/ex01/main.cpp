/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:19:49 by shilal            #+#    #+#             */
/*   Updated: 2023/10/15 09:06:08 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *a;

    int j = 3;

    a = zombieHorde(j, "hilal");

    for (int i = 0; i < j; i++)
        a[i].announce();

    delete [] a;
    return (0);
}