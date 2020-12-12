/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:28 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:44:14 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Evil")
{
    std::cout << this->get_name() << " created! (FragTrap) (KIND)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &type) : ClapTrap(type)
{
    *this = type;
}

FragTrap & FragTrap::operator=(const FragTrap &type)
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

void FragTrap::vaulthunter_dot_exe (std::string const & target)
{
    std::string attack[5];
    int random;

    attack[0] = " chamarnyt attack ";
    attack[1] = " super-puper-mega attack ";
    attack[2] = " chapalah attack ";
    attack[3] = " progib attack ";
    attack[4] = " VELIKII SUPER MEGA CHAPALAHHHHH attack ";
    random = rand() % 4 + 0;
    if(this->get_energy() >= 25)
    {
        std::cout << "FR4G-TP " << this->get_name() <<  attack[random] << target << " " << 20 << " points of damage!" << std::endl;
        this->set_energy(this->get_energy() - 25);
    }
    else
    {
        std::cout << "Not enough energy to attack." << " Current energy: " << this->get_energy() << std::endl;
        this->beRepaired(25);
    }
}

FragTrap::~FragTrap()
{
    std::cout << this->get_name() << " deleted! (FragTrap) (KIND)" << std::endl;
}