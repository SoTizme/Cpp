/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:16:14 by shilal            #+#    #+#             */
/*   Updated: 2023/11/14 16:08:37 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private:
        bool statu;
        const std::string name;
        const int gradeS;
        const int gradeE;

    public:
//  ----------- Canonical Forms -----------
        AForm();
        AForm(std::string n, int gs, int ge);
        AForm(AForm const& clap);
        AForm& operator=(AForm const& clap);
        virtual ~AForm();

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
    virtual void execute(Bureaucrat const & executor)const = 0;
};

std::ostream& operator<<(std::ostream& output, const AForm& obj);

#endif