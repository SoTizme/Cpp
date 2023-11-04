/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:39 by shilal            #+#    #+#             */
/*   Updated: 2023/11/04 20:29:55 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{

    std::string const name;
    int grade;

    public :

        Bureaucrat();
        Bureaucrat(std::string OneName, int OneGrade);
        Bureaucrat(Bureaucrat const& clap);
        Bureaucrat& operator=(Bureaucrat const& clap);
        ~Bureaucrat();

//  -------------- Throw my Exception Eroors --------------

    class high: public std::exception
    {
        public :
           const char* what() const throw(){
                return "Bureaucrat::GradeTooHighException";
            }
    };
    class low: public std::exception
    {
        public :
             const char* what() const throw(){
                return "Bureaucrat::GradeTooLowException";
            }
    };
    
    std::string getName() const;
    int getGrade()const;
    void OutRange(int n);
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);

#endif