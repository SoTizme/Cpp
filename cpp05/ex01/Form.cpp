/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:11 by shilal            #+#    #+#             */
/*   Updated: 2023/11/06 22:02:20 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("leader"), gradeS(1), gradeE(1){}

Form::Form(std::string n, int gs, int ge, bool st): name(n), gradeS(gs), gradeE(ge){
    statu = st;
}

Form::~Form(){}


void Form::beSigned(Bureaucrat b){
    if (b.getGrade() >= gradeS)
        std::cout<< "hiiiii form 10" << std::endl;
}