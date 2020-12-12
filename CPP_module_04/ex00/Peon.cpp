/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:20 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:24:17 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string value) : Victim(value)
{
    this->name = value;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &type) : Victim(type)
{
    *this = type;
}

Peon & Peon::operator=(const Peon &type)
{
    this->name = type.name;
    return(*this);
}

void Peon::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

std::ostream & operator<<(std::ostream &out, const Peon &peon)
{
    out << "I am " << peon.getName() << " and I like otters!" << std::endl;
    return(out);
}