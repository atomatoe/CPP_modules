/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:37:55 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:23:02 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name() const { return this->_name; }

void Zombie::anounce() const
{
    std::cout << this->_name << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie() {
    std::string names[7] = {"atomatoe", "Gendalf", "Leonardo", "Lency", "Jassy", "Marta", "Trish"};
    this->_name = names[rand() % 7 + 0];
    this->_type = "def";
}

Zombie::~Zombie()
{
    std::cout << this->_name << " deleted" << std::endl;
}