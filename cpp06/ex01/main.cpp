/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:18:16 by shilal            #+#    #+#             */
/*   Updated: 2023/11/19 20:00:38 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int main(){

    Data p = {'p', 97, 888888, 55.55468};

    uintptr_t tmp = Serializer::serialize(&p);

    Data *k = Serializer::deserialize(tmp);

    std::cout << k->c << std::endl;
    std::cout << k->i << std::endl;
    std::cout << k->d << std::endl;
    std::cout << k->k << std::endl;
    return 0;
}