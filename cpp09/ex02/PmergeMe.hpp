/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:43 by shilal            #+#    #+#             */
/*   Updated: 2023/12/23 15:07:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>

class PmergeMe {
    private:
        std::vector<int> vec;
    public:
        PmergeMe();
        ~PmergeMe(); 
    void SetVec(char **av, int len);
};

#endif