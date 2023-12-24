/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:43 by shilal            #+#    #+#             */
/*   Updated: 2023/12/24 23:19:45 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <time.h>

class PmergeMe {
    private:
        std::vector<std::pair<size_t, size_t> > data;
        std::deque<std::pair<size_t, size_t> > sdata;
        size_t Num;
        int len;
        double TimeFinished;
    public:
        PmergeMe();
        ~PmergeMe();

    void SetVec(char **av, int size);
    void Setdeque(char **av, int size);

    template <typename T> void FunctionSort(T& FirstVec, T& SecondVec, clock_t t);
};

#endif