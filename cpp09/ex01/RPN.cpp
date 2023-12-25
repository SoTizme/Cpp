/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:54 by shilal            #+#    #+#             */
/*   Updated: 2023/12/25 19:07:38 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string s) : line(s) {
    if (line.empty() || line.find_first_not_of("0123456789 +*/-") != std::string::npos)
        throw std::runtime_error("Error");
}

RPN::RPN(const RPN& clap){
    *this = clap;
}

RPN& RPN::operator=(const RPN& clap){
    if (&clap != this){
        list = clap.list;
        line = clap.line;
    }
    return (*this);
}

RPN::~RPN(){}

// -------------------------------------------------------------------------------------

void    RPN::CalculIt(int n, std::string opertor){
    list.pop();
    int nb = list.top();
    list.pop();
    if (opertor == "+")
        list.push(nb+n);
    else if (opertor == "-")
        list.push(nb-n);
    else if (opertor == "*")
        list.push(nb*n);
    else
        list.push(nb/n);
}

void    RPN::CheckIt(std::string s){

    std::string check;
    size_t i = -1;
    while (++i < line.size()){
        check = line.substr(i, s.find(' '));
        s.erase(0,s.find(' ') + 1);
        if (check.empty())
             continue;
        if (check.size() == 1 && check.find_first_not_of("+*/-") != std::string::npos)
            list.push(atoi(check.c_str()));
        else if (check.size() == 1 && list.size() >= 2)
            CalculIt(list.top(), check);
        else
            throw std::runtime_error("Error");
        i++;
    }
    if (list.size() != 1)
        throw std::runtime_error("Error");
    std::cout << list.top() << std::endl;
}
