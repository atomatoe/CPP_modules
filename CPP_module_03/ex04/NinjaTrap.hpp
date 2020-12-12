/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:50:14 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:58:43 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(const NinjaTrap &type);
    NinjaTrap & operator=(const NinjaTrap &);
    void ninjaShoebox(ClapTrap &name);
    void ninjaShoebox(ScavTrap &name);
    void ninjaShoebox(NinjaTrap &name);
    virtual void melee_damage();
    int get_energy_point();
    int get_max_energy_point();
    void get_statistic();
    ~NinjaTrap(); // деструктор
};

#endif