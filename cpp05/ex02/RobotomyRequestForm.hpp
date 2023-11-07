/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:12 by shilal            #+#    #+#             */
/*   Updated: 2023/11/07 15:59:49 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const& clap);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& clap);
        ~RobotomyRequestForm();
};

#endif