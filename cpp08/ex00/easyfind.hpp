/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:08:29 by shilal            #+#    #+#             */
/*   Updated: 2023/12/08 18:13:17 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T> void easyfind(T arr, int f)
{
    if (find(arr.begin(), arr.end(), f) == arr.end())
        throw std::out_of_range("The occurrence Not Found");
    std::cout << "The occurrence Found" << std::endl;
}

#endif