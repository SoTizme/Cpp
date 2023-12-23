/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:38 by shilal            #+#    #+#             */
/*   Updated: 2023/12/23 16:10:14 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    
}

PmergeMe::~PmergeMe(){
    
}

void PmergeMe::SetVec(char **av, int len){
    std::vector<std::pair<size_t, size_t> > l;
    // for (std::vector<int>::iterator it = l->begin(); it != l.end(); it++)
    // {
    //    std::cout <<  << std::endl;
    // }

    std::cout << (len / 2) << std::endl;
    std::cout << av[len - 1] << std::endl;
    
}