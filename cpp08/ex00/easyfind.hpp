/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:08:29 by shilal            #+#    #+#             */
/*   Updated: 2023/11/29 18:03:13 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T> void easyfind(T arr, int f)
{
    std::vector<int>::iterator n;
    n = find(arr.begin(), arr.end(), f);
    if (n == arr.end())
        throw std::out_of_range("Not Found");
    std::cout << "The occurrence Found" << std::endl;
}

#endif