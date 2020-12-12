/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:55:01 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:33:07 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure created" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria* new_materia = new Cure();
    return(new_materia);
}

Cure::Cure(const Cure &type) : AMateria("cure")
{
    *this = type;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
    this->_xp += 10;
}

Cure::~Cure()
{
    // std::cout << "Cure deleted" << std::endl;
}

Cure & Cure::operator=(const Cure &type)
{
    this->_xp = type._xp;
    this->type = type.type;
    return(*this);
}