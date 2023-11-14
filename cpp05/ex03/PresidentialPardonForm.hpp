/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:07 by shilal            #+#    #+#             */
/*   Updated: 2023/11/10 15:47:54 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm{

    std::string target;
    
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(PresidentialPardonForm const& clap);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& clap);
        ~PresidentialPardonForm();

    void execute(Bureaucrat const & executor)const;
};

#endif