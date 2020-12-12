/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:54:59 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:32:56 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice created" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria* new_materia = new Ice();
    return(new_materia);
}

Ice::Ice(const Ice &type) : AMateria("ice")
{
    *this = type;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->_xp += 10;
}

Ice::~Ice()
{
    // std::cout << "Ice deleted" << std::endl;
}

Ice & Ice::operator=(const Ice &type)
{
    this->_xp = type._xp;
    this->type = type.type;
    return(*this);
}