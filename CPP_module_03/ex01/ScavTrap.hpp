/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:04:01 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:41:00 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
private:
    std::string name;
    unsigned int hit_point;
    unsigned int max_hit_point;
    unsigned int energy_point;
    unsigned int max_energy_point;
    unsigned int level;
    unsigned int melee_attack;
    unsigned int ranged_attack;
    unsigned int armor_reduction;

public:
    ScavTrap(std::string value); // стандартный конструктор
    ScavTrap(const ScavTrap &);
    ScavTrap & operator=(const ScavTrap &);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void ChallengeNewcomer(std::string const & target);
    void novicate_door(std::string const & target);
    ~ScavTrap(); // деструктор
};

#endif