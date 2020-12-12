/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:21:40 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/01 18:53:37 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string value) { this->_type = value; }

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *zomb = new Zombie(name, this->_type);
    return (zomb);
}

Zombie *ZombieEvent::randomChump()
{
    int random;
    std::string name[5];

    name[0] = "Gendalf";
    name[1] = "Paul";
    name[2] = "Louce";
    name[3] = "Nancy";
    name[4] = "Vladimir";
    random = rand() % 4 + 0;

    Zombie *grey = new Zombie(name[random], this->_type);
    return(grey);
}