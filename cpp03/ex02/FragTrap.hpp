/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:12 by shilal            #+#    #+#             */
/*   Updated: 2023/10/25 13:21:04 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public :
        FragTrap();
        FragTrap(std::string n);
        FragTrap(FragTrap const& flag);
        FragTrap& operator=(FragTrap const& flag);
        ~FragTrap();

    void highFivesGuys(void);
};

#endif