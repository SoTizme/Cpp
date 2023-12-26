/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:43 by shilal            #+#    #+#             */
/*   Updated: 2023/12/26 19:42:00 by shilal           ###   ########.fr       */
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
        std::vector<std::pair<size_t, size_t> > Vdata;
        std::deque<std::pair<size_t, size_t> > Ddata;
        std::vector<size_t> vec;
        std::deque<size_t> deque;
        size_t Num;
        size_t len;
        double TimeFinished;

    public:
        PmergeMe();
        PmergeMe(char **av, size_t size);
        PmergeMe(PmergeMe const& clap);
        PmergeMe& operator=(PmergeMe const& clap);
        ~PmergeMe();

    void SetVec();
    void Setdeque();

    template <typename T> void ToContainer(T& data, char **av);
    template <typename T, typename P> void FunctionSort(P& data,T& First);
};

#endif