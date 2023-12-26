/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:52:38 by shilal            #+#    #+#             */
/*   Updated: 2023/12/26 19:49:23 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): len(0){
    Num = 0;
    TimeFinished = 0;
}

PmergeMe::PmergeMe(char **av, size_t size) : len(size){
    ToContainer<std::vector<std::pair<size_t, size_t> > >(Vdata, av);
    ToContainer<std::deque<std::pair<size_t, size_t> > >(Ddata, av);
    if (len % 2 != 0){
        Num = atol(av[len - 1]);
        if (Num > INT_MAX)
            throw std::runtime_error("Error: Not a valid Unsigned int argument");
    }
}

PmergeMe::PmergeMe(PmergeMe const& clap){
    *this = clap;
}

PmergeMe& PmergeMe::operator=(PmergeMe const& clap){
    Vdata = clap.Vdata;
    Ddata = clap.Ddata;
    Num = clap.Num;
    len = clap.len;
    TimeFinished = clap.TimeFinished;
    return (*this);
}


PmergeMe::~PmergeMe(){}


template <typename T> void PmergeMe::ToContainer(T& data, char **av){
    size_t n1;
    size_t n2;
    size_t i = 0;
    while (i+1 < len) {
        n1 = atol(av[i]);
        n2 = atol(av[i+1]);
        if (n1 > INT_MAX || n2 > INT_MAX)
            throw std::runtime_error("Error: Not a valid Unsigned int argument");
        data.push_back(std::make_pair(n1,n2));
        i+=2;
    }
}

template <typename T, typename P> void PmergeMe::FunctionSort(P& data,T& continer){

    T Second;
    clock_t t = clock();
    for (typename P::iterator it = data.begin(); it != data.end(); it++) {
        if (it->first > it->second)
            std::swap(it->first, it->second);
        continer.push_back(it->first);
        Second.push_back(it->second);
    }
    
    std::sort(continer.begin(), continer.end());

    typename T::iterator nb = Second.begin();
    typename T::iterator it;
    while (nb != Second.end()){
        it = std::upper_bound(continer.begin(), continer.end(), *nb);
        continer.insert(it, *nb);
        nb++;
    }
    if (len % 2 != 0 ) {
        it = std::upper_bound(continer.begin(), continer.end(), Num);
        continer.insert(it, Num);
    }
    TimeFinished = (clock() - t)/((double)CLOCKS_PER_SEC);
}


void PmergeMe::SetVec(){

    std::cout << "Before: ";
    for (std::vector<std::pair<size_t, size_t> >::iterator it = Vdata.begin(); it != Vdata.end(); it++)
        std::cout << it->first << " " << it->second << " ";
    if (len % 2 != 0)
        std::cout << Num;
    std::cout << std::endl;
    
    FunctionSort<std::vector<size_t>, std::vector<std::pair<size_t, size_t> > >(Vdata, vec);

    std::cout << "After:  ";
    for (std::vector<size_t>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of "<< len << " elements with std::vector : "; 
    std::cout << std::fixed << TimeFinished << " s" << std::endl;
}


void PmergeMe::Setdeque(){

    FunctionSort<std::deque<size_t> ,std::deque<std::pair<size_t, size_t> > >(Ddata, deque);

    std::cout << "Time to process a range of "<< len << " elements with std::deque : "; 
    std::cout << std::fixed << TimeFinished << " s" << std::endl;
}