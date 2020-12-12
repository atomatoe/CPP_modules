/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:42:33 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:15:03 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
    this->name = name;
    this->ap = 40;
    this->weapon = NULL;
}

Character::Character(const Character &type)
{
    *this = type;
}

void Character::recoverAP()
{
    if((ap + 10) < 40)
        this->ap = this->ap + 10;
}

void Character::equip(AWeapon *type)
{
    weapon = type;
}

void Character::attack(Enemy *enemy)
{
    std::cout << this->name << " attack " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
    this->ap = this->ap - this->weapon->getAPCost();
    weapon->attack();
    enemy->takeDamage(weapon->getDamage());
}

std::string Character::getName() const
{
    return(this->name);
}

int Character::getAp() const
{
    return(this->ap);
}

Character & Character::operator=(const Character &type)
{
    this->name = type.name;
    this->weapon = type.weapon;
    this->ap = type.ap;
    return(*this);
}

AWeapon* Character::getWeapon() const
{
    return(weapon);
}

std::ostream & operator<<(std::ostream &out, const Character &character)
{
    if(!character.getWeapon())
    {
        out << character.getName() << " has " << character.getAp() << " AP and is unarmed." << std::endl;
    }
    else
    {
        out << character.getName() << " has " << character.getAp() << " and wields a " << character.getWeapon()->getName() << std::endl;
    }
    return(out);
}