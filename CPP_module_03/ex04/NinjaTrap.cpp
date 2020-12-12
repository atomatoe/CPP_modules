/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:50:15 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:47:14 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("NinjaTrap", 60, 60, 120, 120, 1, 60 , 5, 0)
{
    // std::cout << this->name << " created! (Ninja trap) (KIND)" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &type) : ClapTrap("NinjaTrap", 60, 60, 120, 120, 1, 60 , 5, 0)
{
    *this = type;
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

void NinjaTrap::ninjaShoebox(ClapTrap &name)
{
    std::cout << "Ninja calls on " << name.get_name() << " !!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &name)
{
    std::cout << "Ninja calls on " << name.get_name() << " !!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &name)
{
    std::cout << "Ninja calls on " << name.get_name() << " !!!" << std::endl;
}

void NinjaTrap::melee_damage()
{
    std::cout << "Ninja attack! Damage: " << this->melee_attack << " hit point's" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    // std::cout << this->name << " - NINJA KILL! (KIND)" << std::endl;
}

int NinjaTrap::get_energy_point()
{
    return (this->energy_point);
}

int NinjaTrap::get_max_energy_point()
{
    return (this->max_energy_point);
}

void NinjaTrap::get_statistic()
{
    std::cout << "\n" << this->get_name() << " statistic:" << std::endl;
    std::cout << "Energy point: " << this->get_energy_point() << std::endl;
    std::cout << "Max energy point: " << this->get_max_energy_point() << std::endl;
    std::cout << "Melee attack: " << this->get_melee_attack() << std::endl;
    this->melee_damage();
}