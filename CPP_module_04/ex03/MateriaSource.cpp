/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:54:52 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:32:14 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->m_count = 0;
    this->pull = new AMateria*[4];
    // std::cout << "MateriaSouce created" << std::endl;
}

void MateriaSource::learnMateria(AMateria *type)
{
    if(m_count < 3)
    {
        this->pull[this->m_count] = type;
        this->m_count++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &type)
{
    *this = type;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->pull[i]->getType() == type)
        {
            return(this->pull[i]);
        }
    }
    return(NULL);
}

MateriaSource::~MateriaSource()
{
    // std::cout << "MateriaSource deleted" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &type)
{
    this->m_count = type.m_count;
    this->pull = type.pull;
    return(*this);
}