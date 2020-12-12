/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:50:15 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:46:32 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("NinjaTrap")
{
    this->hit_point = 60;
    this->max_hit_point = 60;
    this->energy_point = 120;
    this->max_energy_point = 120;
    this->level = 1;
    this->melee_attack = 60;
    this->ranged_attack = 5;
    this->armor_reduction = 0;
    std::cout << this->name << " created! (Ninja trap) (KIND)" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &type)
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

NinjaTrap::NinjaTrap(const NinjaTrap &type) : ClapTrap("NinjaTrap")
{
    *this = type;
}

void NinjaTrap::ninjaShoebox(ClapTrap &name)
{
    std::cout << "Ninja attack on " << name.get_name() << " !!!" << std::endl;
    name.takeDamage(5);
    std::cout << "Ninja inflicted damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &name)
{
    std::cout << "Ninja attack on " << name.get_name() << " !!!" << std::endl;
    name.takeDamage(5);
    std::cout << "Ninja inflicted damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &name)
{
    std::cout << "Ninja attack on " << name.get_name() << " !!!" << std::endl;
    name.takeDamage(5);
    std::cout << "Ninja inflicted damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &name)
{
    std::cout << "Ninja attack on " << name.get_name() << " !!!" << std::endl;
    name.takeDamage(5);
    std::cout << "Ninja inflicted damage!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << this->name << " - NINJA KILL! (KIND)" << std::endl;
}