/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:57 by shilal            #+#    #+#             */
/*   Updated: 2023/12/25 20:01:59 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN {

    private :
        std::stack<int> list;
        std::string line;

    public :
        RPN();
        RPN(std::string s);
        RPN(const RPN& clap);
        RPN& operator=(const RPN& clap);
        ~RPN();
    
    void CheckIt(std::string s);

    private :
        void CalculIt(int n, std::string opertor);
};

#endif