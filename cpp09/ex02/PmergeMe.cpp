/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:38 by shilal            #+#    #+#             */
/*   Updated: 2023/12/24 23:23:02 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    
}

PmergeMe::~PmergeMe(){

    std::cout << "Time to process a range of "<< len << " elements with std::deque : "; 
    std::cout << std::fixed << TimeFinished << " us" << std::endl;
}

template <typename T> void PmergeMe::FunctionSort(T& First, T& Second, clock_t t){

    std::sort(First.begin(), First.end());
    typename T::iterator nb = Second.begin();
    typename T::iterator it = First.begin();
    while (nb != Second.end()){
        if (it == First.end() || *nb < *it) {
            First.insert(it--, *nb);
            it = First.begin();
            nb++;
            continue;
        }
        it++;
    }
    if (len % 2 != 0) {
        it = First.begin();
        for ( ; it != First.end(); it++) {
            if (Num < *it)
                break;
        }
        First.insert(it--, Num);
    }

    TimeFinished = (clock() - t)/((double)CLOCKS_PER_SEC);
}


void PmergeMe::SetVec(char **av, int size){
    std::vector<size_t> First;
    std::vector<size_t> Second;
    len = size;

    int i = 0;
    while (i+1 < len) {
        data.push_back(std::make_pair(atol(av[i]),atol(av[i+1])));
        i+=2;
    }

    std::cout << "Before: ";
    for (std::vector<std::pair<size_t, size_t> >::iterator it = data.begin(); it != data.end(); it++)
        std::cout << it->first << " " << it->second << " ";
    if (len % 2 != 0){
        Num = atol(av[len - 1]);
        std::cout << Num;
    }
    std::cout << std::endl;
    
    clock_t t = clock();
    for (std::vector<std::pair<size_t, size_t> >::iterator it = data.begin(); it != data.end(); it++) {
        if (it->first > it->second)
            std::swap(it->first, it->second);
        First.push_back(it->first);
        Second.push_back(it->second);
    }

    FunctionSort<std::vector<size_t> >(First, Second, t);
    
    std::cout << "After:  ";
    for (std::vector<size_t>::iterator it = First.begin(); it != First.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of "<< len << " elements with std::vector : "; 
    std::cout << std::fixed << TimeFinished << " us" << std::endl;
}


void PmergeMe::Setdeque(char **av, int size){
    std::deque<size_t> First;
    std::deque<size_t> Second;
    len = size;

    int i = 0;
    while (i+1 < len) {
        sdata.push_back(std::make_pair(atol(av[i]),atol(av[i+1])));
        i+=2;
    }
    clock_t t = clock();
    for (std::deque<std::pair<size_t, size_t> >::iterator it = sdata.begin(); it != sdata.end(); it++) {
        if (it->first > it->second)
            std::swap(it->first, it->second);
        First.push_back(it->first);
        Second.push_back(it->second);
    }
    FunctionSort<std::deque<size_t> >(First, Second, t);
}