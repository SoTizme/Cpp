/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:12 by shilal            #+#    #+#             */
/*   Updated: 2023/11/15 12:17:43 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm{

    std::string target;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm const& clap);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& clap);
        ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor)const;
};

#endif