/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:43:10 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:29:56 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &type) : Enemy(170, "Super Mutant")
{
    *this = type;
}

void SuperMutant::takeDamage(int value)
{
    if(value > 3)
        value = value - 3;
    else
        value = 0;
    hp = hp - value;
    std::cout << type << " taked " << value << " damage!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &type)
{
    this->type = type.type;
    this->hp = type.hp;
    return(*this);
}