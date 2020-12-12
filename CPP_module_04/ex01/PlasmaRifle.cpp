/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:42:43 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:34:13 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
    // std::cout << this->name << " created!" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &type) : AWeapon("Plasma Rifle", 21, 5)
{
    *this = type;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
    std::cout << "PlasmaRifle deleted!" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &type)
{
    this->name = type.name;
    this->damage = type.damage;
    this->ap_cost = type.ap_cost;
    this->out_attack = type.out_attack;
    return(*this);
}