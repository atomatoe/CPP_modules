/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:03:47 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:47:31 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(), NinjaTrap() { }

SuperTrap::SuperTrap(const SuperTrap &type) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(), NinjaTrap()
{
    *this = type;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &type)
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

void SuperTrap::rangedAttack()
{
    this->ranged_damage();
}

void SuperTrap::meleeAttack()
{
    this->melee_damage();
}

void SuperTrap::get_statictic()
{
    std::cout << "\n" << this->name << " statistic:" << std::endl;
    std::cout << "Hit point: " << this->hit_point << std::endl;
    std::cout << "Max hit point: " << this->max_hit_point << std::endl;
    std::cout << "Energy point: " << this->energy_point << std::endl;
    std::cout << "Max energy point: " << this->max_energy_point << std::endl;
    std::cout << "Level: " << this->level << std::endl;
    std::cout << "Melee atack: " << this->melee_attack << std::endl;
    std::cout << "Ranged attack: " << this->ranged_attack << std::endl;
    std::cout << "Armor reduction: " << this->armor_reduction << std::endl;
}

SuperTrap::~SuperTrap()
{
    // std::cout << this->name << " destroyed !!! (SuperTrap) (KIND)" << std::endl;
}