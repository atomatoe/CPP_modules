/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:42:38 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:18:23 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
    //std::cout << "Enemy created!" << std::endl;
}

Enemy::Enemy(const Enemy &type)
{
    *this = type;
}

Enemy::Enemy()
{
    //std::cout << "(Standart) Gaaah. Me want smash heads!" << std::endl;
}

std::string Enemy::getType() const
{
    return(type);
}

int Enemy::getHP() const
{
    return(hp);
}

void Enemy::takeDamage(int value)
{
    if((this->hp - value) > 0)
        this->hp = this->hp - value;
    //std::cout << type << " taked " << value << " damage!" << std::endl;
}

Enemy::~Enemy()
{
    std::cout << "Aaargh..." << std::endl;
}

Enemy & Enemy::operator=(const Enemy &type)
{
    this->type = type.type;
    this->hp = type.hp;
    return(*this);
}