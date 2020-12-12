/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:04:01 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:59:18 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap(); // стандартный конструктор
    ScavTrap(const ScavTrap &type);
    ScavTrap & operator=(const ScavTrap &);
    void ChallengeNewcomer(std::string const & target);
    void novicate_door(std::string const & target);
    ~ScavTrap(); // деструктор
};

#endif