/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:42:22 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:15:35 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    // std::cout << "Standart AWeapon created!" << std::endl;
}

AWeapon::AWeapon(const AWeapon &type)
{
    *this = type;
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost)
{
    this->name = name;
    this->ap_cost = apcost;
    this->damage = damage;
    this->out_attack = "pew";
    // std::cout << this->name << " AWeapon created!" << std::endl;
}

std::string AWeapon::getName() const
{
    return(name);
}

int AWeapon::getDamage() const
{
    return(damage);
}

AWeapon & AWeapon::operator=(const AWeapon &type)
{
    this->name = type.name;
    this->damage = type.damage;
    this->ap_cost = type.ap_cost;
    this->out_attack = type.out_attack;
    return(*this);
}

int AWeapon::getAPCost() const
{
    return(ap_cost);
}

AWeapon::~AWeapon()
{
    std::cout << "AWeapon deleted!" << std::endl;
}