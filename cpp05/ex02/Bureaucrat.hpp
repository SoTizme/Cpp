/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:39 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 12:17:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    private:
        std::string const name;
        int grade;

    public :
//  ----------------- Canonical Forms ----------------
        Bureaucrat();
        Bureaucrat(std::string OneName, int OneGrade);
        Bureaucrat(Bureaucrat const& clap);
        Bureaucrat& operator=(Bureaucrat const& clap);
        ~Bureaucrat();

//  ------------- custom exception class --------------
    class GradeTooHighException: public std::exception{
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception{
        const char* what() const throw();
    };
    
//  ---- Members Functions ----
    std::string getName() const;
    int getGrade()const;
    void increment();
    void decrement();
    void signForm(AForm &f);
    void executeForm(AForm const & form);
};


std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);

#endif