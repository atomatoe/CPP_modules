/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:43:01 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:17:53 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &type) : Enemy(80, "RadScorpion")
{
    *this = type;
}

void RadScorpion::takeDamage(int value)
{
    if((this->hp - value) > 0)
        this->hp = this->hp - value;
    else
        std::cout << "* SPROTCH *" << std::endl;
    //std::cout << type << " taked " << value << " damage!" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &type)
{
    this->type = type.type;
    this->hp = type.hp;
    return(*this);
}