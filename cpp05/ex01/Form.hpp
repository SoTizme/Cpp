/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:14 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 18:11:36 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
        bool statu;
        const std::string name;
        const int gradeS;
        const int gradeE;

    public:
//  ----------- Canonical Forms -----------
        Form();
        Form(std::string n, int gs, int ge);
        Form(Form const& clap);
        Form& operator=(Form const& clap);
        ~Form();

//  ------------- custom exception class --------------
    class GradeTooHighException: public std::exception{
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception{
        const char* what() const throw();
    };

//  ---- Members Functions ----
    void beSigned(Bureaucrat b);
    std::string getName() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getStat() const;
};

std::ostream& operator<<(std::ostream& output, const Form& obj);

#endif