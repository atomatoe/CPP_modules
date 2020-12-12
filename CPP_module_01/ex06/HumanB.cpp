/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:58:10 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/02 20:57:41 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string value)
{
    this->_name = value;
}

void HumanB::attack()
{
    std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &name)
{
    this->_weapon = &name;
}