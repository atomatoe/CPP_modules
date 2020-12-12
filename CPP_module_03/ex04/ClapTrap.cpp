/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:58:44 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:46:54 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string value)
{
    this->name = value;
    this->hit_point = 100;
    this->max_hit_point = 100;
    this->energy_point = 100;
    this->max_energy_point = 100;
    this->level = 1;
    this->melee_attack = 30;
    this->ranged_attack = 20;
    this->armor_reduction = 5;
    // std::cout << this->name << " created! (ClapTrap) (FATHER)" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &type)
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

ClapTrap::ClapTrap(const ClapTrap &type)
{
    *this = type;
}

ClapTrap::ClapTrap(std::string name, int hp, int max_hp, int energ, int max_energ, int level, int melee_a, int rang_a, int arm_red)
{
    this->name = name;
    this->hit_point = hp;
    this->max_hit_point = max_hp;
    this->energy_point = energ;
    this->max_energy_point = max_energ;
    this->level = level;
    this->melee_attack = melee_a;
    this->ranged_attack = rang_a;
    this->armor_reduction = arm_red;
    // std::cout << this->name << " created! (ClapTrap) (FATHER)" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    if(this->energy_point >= 20)
    {
        std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->ranged_attack - this->armor_reduction << " points of damage!" << std::endl;
        this->energy_point = this->energy_point - 20;
    }
    else
    {
        std::cout << "Not enough energy to attack." << "Current energy: " << this->energy_point << std::endl;
        this->beRepaired(20);
    }
}

void ClapTrap::meleeAttack(std::string const & target)
{
    if(this->energy_point >= 10)
    {
        std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->melee_attack - this->armor_reduction << " points of damage!" << std::endl;
        this->energy_point = this->energy_point - 10;
    }
    else
    {
        std::cout << "Not enough energy to attack." << "Current energy: " << this->energy_point << std::endl;
        this->beRepaired(10);
    }
}

void ClapTrap::takeDamage(int amount)
{
    if(this->hit_point > amount)
    {
        std::cout << this->name << " takes " << amount << " damage!" << std::endl;
        this->hit_point = this->hit_point - amount;
    }
    else
    {
        std::cout << this->name << " dodges attack!" << std::endl;
        this->beRepaired(amount);
    }
}

void ClapTrap::beRepaired(int amount)
{
    if((this->hit_point + amount) < this->max_hit_point)
    {
        std::cout << this->name << " restored " << amount << " hit point's!" << std::endl;
        this->hit_point = this->hit_point + amount;
    }
    else
    {
        this->hit_point = this->max_hit_point;
        std::cout << this->name << " has a lot of health" << std::endl;
    }
    if((this->energy_point + amount) < this->max_energy_point)
    {
        std::cout << this->name << " restored " << amount << " energy!" << std::endl;
        this->energy_point = this->energy_point + amount;
    }
    else
    {
        this->energy_point = this->max_energy_point;
        std::cout << this->name << " has a lot of energy!" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    // std::cout << this->get_name() << " deleted! (ClapTrap) (FATHER)" << std::endl;
}

std::string ClapTrap::get_name()
{
    return(name);
}

int ClapTrap::get_energy()
{
    return(energy_point);
}

int ClapTrap::get_melee_attack()
{
    return(melee_attack);
}

void ClapTrap::set_energy(int value)
{
    energy_point = value;
}

int ClapTrap::get_hit_point()
{
    return(this->hit_point);
}

int ClapTrap::get_max_hit_point()
{
    return(this->max_hit_point);
}

int ClapTrap::get_ranged_attack()
{
    return(this->ranged_attack);
}

int ClapTrap::get_armor_reduction()
{
    return(this->armor_reduction);
}