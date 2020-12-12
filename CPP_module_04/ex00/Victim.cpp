/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:26 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:22:01 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string value)
{
    this->name = value;
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &type)
{
    *this = type;
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
    return(this->name);
}

void Victim::setName(std::string value)
{
    this->name = value;
}

std::ostream & operator<<(std::ostream &out, const Victim &victim)
{
    out << "I am " << victim.getName() << " and I like otters!" << std::endl;
    return(out);
}

Victim & Victim::operator=(const Victim &type)
{
    this->name = type.name;
    return(*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}