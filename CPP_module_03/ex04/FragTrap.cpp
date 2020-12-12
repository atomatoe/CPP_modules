/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:28 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:47:03 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
{
    // std::cout << this->get_name() << " created! (FragTrap) (KIND)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &type) : ClapTrap("FragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
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

void FragTrap::ranged_damage()
{
    std::cout << "Frag trap attack! Damage: " << this->get_ranged_attack() << " hit point's" << std::endl;
}

void FragTrap::get_statistic()
{
    std::cout << "\n" << this->get_name() << " statistic:" << std::endl;
    std::cout << "Hit point: " << this->get_hit_point() << std::endl;
    std::cout << "Max hit point: " << this->get_max_hit_point() << std::endl;
    std::cout << "Ranged attack: " << this->get_ranged_attack() << std::endl;
    std::cout << "Armor reduction: " << this->get_armor_reduction() << std::endl;
    std::cout << "ranged attack :" << this->get_ranged_attack() << std::endl;
    this->ranged_damage();
}

FragTrap::~FragTrap()
{
    // std::cout << this->get_name() << " deleted! (FragTrap) (KIND)" << std::endl;
}
