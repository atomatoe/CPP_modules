/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:50:14 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:55:59 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
private:
    std::string name;
    int hit_point;
    int max_hit_point;
    int energy_point;
    int max_energy_point;
    int level;
    int melee_attack;
    int ranged_attack;
    int armor_reduction;
public:
    NinjaTrap();
    NinjaTrap(const NinjaTrap &type);
    NinjaTrap & operator=(const NinjaTrap &);
    void    ninjaShoebox(ClapTrap &name);
	void    ninjaShoebox(FragTrap &name);
	void    ninjaShoebox(NinjaTrap &name);
	void    ninjaShoebox(ScavTrap &name);
    ~NinjaTrap(); // деструктор
};

#endif