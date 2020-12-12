/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:58:14 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/02 20:59:29 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string value, Weapon &name)
{
    this->_name = value;
    this->_weapon = &name;
}

void HumanA::attack()
{
    std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
}