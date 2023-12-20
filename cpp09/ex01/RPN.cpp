/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:54 by shilal            #+#    #+#             */
/*   Updated: 2023/12/20 18:19:04 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void    RPN::CalculIt(int n, int nb, std::string opertor){
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

RPN::RPN(std::string s) : line(s){
    if (line.empty() || line.find_first_not_of("0123456789 +*/-") != std::string::npos)
        throw std::runtime_error("Error");
    std::string check;
    size_t i = 0;
    for (std::string::iterator it = line.begin(); it < line.end(); it++){
        check = line.substr(i, s.find(' '));
        s.erase(0,s.find(' ')+1);
        if (check.size() != 1)
            throw std::runtime_error("Error");
        if (check.find_first_not_of("+*/-") != std::string::npos)
            list.push(atoi(check.c_str()));
        else {
            if (list.size() < 2)
                throw std::runtime_error("Error");
            int n = list.top();
            list.pop();
            CalculIt(n, list.top(), check);
        }
        i += 2;
        it += 1;
    }
    if (list.size() != 1)
        throw std::runtime_error("Error");
}

RPN::~RPN(){
    
}