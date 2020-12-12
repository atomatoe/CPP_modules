/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:55:06 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:32:39 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    this->_xp = 0;
    // std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(const AMateria &type)
{
    *this = type;
}

unsigned int AMateria::getXP() const
{
    return(this->_xp);
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

AMateria & AMateria::operator=(const AMateria &type)
{
    this->_xp = type._xp;
    this->type = type.type;
    return(*this);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria deleted" << std::endl;
}