/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:20:03 by shilal            #+#    #+#             */
/*   Updated: 2023/11/18 19:40:53 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t k;
    k = reinterpret_cast<uintptr_t>(ptr);
    return k;
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data *ptr;

    ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}
