/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:23 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:25:18 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string value, std::string value2)
{
    this->name = value;
    this->title = value2;
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &type)
{
    *this = type;
}

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorc)
{
    out << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
    return(out);
}

Sorcerer & Sorcerer::operator=(const Sorcerer &type)
{
    this->name = type.name;
    this->title = type.title;
    return(*this);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

std::string Sorcerer::getName() const
{
    return(this->name);
}

std::string Sorcerer::getTitle() const
{
    return(this->title);
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}