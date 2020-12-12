/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:58:20 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/02 20:54:45 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
    this->_type = value;
}

void Weapon::setType(std::string value)
{
    this->_type = value;
}

std::string Weapon::getType() const
{
    return(this->_type);
}
