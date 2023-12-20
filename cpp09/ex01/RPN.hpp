/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:57 by shilal            #+#    #+#             */
/*   Updated: 2023/12/20 16:00:20 by shilal           ###   ########.fr       */
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
    void CalculIt(int n, int nb, std::string opertor);
};

#endif