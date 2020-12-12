/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:03:50 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:45:59 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << this->get_name() << " created! He is ready to destroy the world! (ScavTrap) (KIND)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &type) : ClapTrap("ScavTrap")
{
    *this = type;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &type)
{
    this->name = type.name;
    this->hit_point = type.hit_point;
    this->max_hit_point = type.max_hit_point;
    this->energy_point = type.energy_point;
    this->max_energy_point = type.max_energy_point;
    this->melee_attack = type.melee_attack;
    this->ranged_attack = type.ranged_attack;
    this->armor_reduction = type.armor_reduction;
    return(*this);
}

void ScavTrap::novicate_door(std::string const & target)
{
    std::string challenge[5];
    int random;

    challenge[0] = "fire wall challenge!";
    challenge[1] = "death wall challenge!";
    challenge[2] = "ice wall challenge!";
    challenge[3] = "high wall challenge!";
    challenge[4] = "water wall challenge!";
    random = rand() % 4 + 0;
    std::cout << "Scav Trap awakened! Selects a challenge for " << target << "..." << std::endl;
    std::cout << "This is " << challenge[random] << std::endl;
    std::cout << target << " starts " << challenge[random] << std::endl;
    this->rangedAttack(target);
    this->meleeAttack(target);
    std::cout << "Challenge for " << target << " finished!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->get_name() << ": noooooo, i'm....... die..... n...o......! (ScavTrap) (KIND)" << std::endl;
}