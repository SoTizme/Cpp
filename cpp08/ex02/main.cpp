/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:48:39 by shilal            #+#    #+#             */
/*   Updated: 2023/12/08 20:44:11 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "---------- More Tests ----------\n\n";
    // Copy constructor and Copy assignment
    {
        std::cout << "Copy constructor : ";
        MutantStack<int> s1(mstack);
        MutantStack<int>::iterator ite = s1.end();
        for (MutantStack<int>::const_iterator it = s1.cbegin(); it != ite; it++)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::cout << "Copy assignment  : ";
        MutantStack<int> s2;
        s2 = s1;
         MutantStack<int>::iterator ite1 = s2.end();
        for (MutantStack<int>::const_iterator it1 = s2.cbegin(); it1 != ite1; it1++)
            std::cout << *it1 << " ";
        std::cout << std::endl;
    }

    // Const
    std::cout << "Const stack      : ";
    const MutantStack<int> p(mstack);
    MutantStack<int>::const_iterator ite1 = p.cend();

    for (MutantStack<int>::const_iterator it1 = p.cbegin(); it1 != ite1; it1++)
        std::cout << *it1 << " ";
    std::cout << std::endl;

    return 0;
    }