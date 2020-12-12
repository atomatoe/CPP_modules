/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:42:55 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:42:13 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
    this->out_attack = "* pschhh... SBAM! *";
}

PowerFist::PowerFist(const PowerFist &type) : AWeapon("Power Fist", 8, 50)
{
    *this = type;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
    std::cout << "PowerFist deleted!" << std::endl;
}

PowerFist & PowerFist::operator=(const PowerFist &type)
{
    this->name = type.name;
    this->damage = type.damage;
    this->ap_cost = type.ap_cost;
    this->out_attack = type.out_attack;
    return(*this);
}