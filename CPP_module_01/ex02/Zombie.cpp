/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:21:09 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:17:21 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name() const { return this->_name; }
std::string Zombie::get_type() const { return this->_type; }

void Zombie::anounce() const
{
    std::cout << this->_name << " " << this->_type << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
    std::cout << this->_name << " created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " deleted!" << std::endl;
}