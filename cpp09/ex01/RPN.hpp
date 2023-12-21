/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:57 by shilal            #+#    #+#             */
/*   Updated: 2023/12/21 10:27:00 by shilal           ###   ########.fr       */
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
        RPN(std::string s);
        ~RPN();
    
    void CheckIt(std::string s);
    void CalculIt(int n, std::string opertor);
};

#endif