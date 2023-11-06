/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:14 by shilal            #+#    #+#             */
/*   Updated: 2023/11/06 22:02:48 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {

    bool statu;
    const std::string name;
    const int gradeS;
    const int gradeE;

    public:
        Form();
        Form(std::string n, int gs, int ge, bool st);
        ~Form();

    void beSigned(Bureaucrat b);
};

#endif