/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:42:07 by shilal            #+#    #+#             */
/*   Updated: 2023/11/07 15:58:48 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const& clap);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& clap);
        ~PresidentialPardonForm();
};

#endif