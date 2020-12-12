/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:03:50 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:41:47 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string value)
{
    this->name = value;
    this->hit_point = 100;
    this->max_hit_point = 100;
    this->energy_point = 50;
    this->max_energy_point = 50;
    this->level = 1;
    this->melee_attack = 20;
    this->ranged_attack = 15;
    this->armor_reduction = 3;
    std::cout << this->name << " created! He is ready to destroy the world!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &type)
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

void ScavTrap::rangedAttack(std::string const & target)
{
    if(this->energy_point >= 20)
    {
        std::cout << "ScavTrap " << this->name <<  " attacks " << target << ". Soon this world will fall !!! He-he-he! " << this->ranged_attack - this->armor_reduction << " points of damage!" << std::endl;
        this->energy_point = this->energy_point - 20;
    }
    else
    {
        std::cout << this->name << ": Even though I missed, I still do damage!" << std::endl;
        std::cout << "Can a trap have little energy?" << " Current energy: " << this->energy_point << std::endl;
        this->beRepaired(20);
    }
}

void ScavTrap::meleeAttack(std::string const & target)
{
    if(this->energy_point >= 10)
    {
        std::cout << "ScavTrap " << this->name <<  " attacks " << target << ". Soon this world will fall!!! He-he-he! " << this->melee_attack - this->armor_reduction << " points of damage!" << std::endl;
        this->energy_point = this->energy_point - 10;
    }
    else
    {
        std::cout << this->name << ": Even though I missed, I still do damage!" << std::endl;
        std::cout << "Can a trap have little energy?" << " Current energy: " << this->energy_point << std::endl;
        this->beRepaired(10);
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if(this->hit_point > amount)
    {
        std::cout << this->name << " takes " << amount << " damage! Watch out, he's very strong!" << std::endl;
        this->hit_point = this->hit_point - amount;
    }
    else
    {
        std::cout << this->name << " dodges attack! It's incredible! He's cheating!" << std::endl;
        this->beRepaired(amount);
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if((this->hit_point + amount) < this->max_hit_point)
    {
        std::cout << this->name << " restored " << amount << " hit point's! It's incredible! He's cheating!" << std::endl;
        this->hit_point = this->hit_point + amount;
    }
    else
    {
        this->hit_point = this->max_hit_point;
        std::cout << this->name << " he has too much health!" << std::endl;
    }
    if((this->energy_point + amount) < this->max_energy_point)
    {
        std::cout << this->name << " restored " << amount << " energy! Watch out, he's very strong" << std::endl;
        this->energy_point = this->energy_point + amount;
    }
    else
    {
        this->energy_point = this->max_energy_point;
        std::cout << this->name << " he has too much energy!" << std::endl;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << ": noooooo, i'm....... die..... n...o......!" << std::endl;
}