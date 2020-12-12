/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:55:04 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:31:02 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &  name)
{
    this->name = name;
    this->m_count = 0;
    this->pull = new AMateria*[4];
    for (int i = 0; i < 4; i++)
		this->pull[i] = NULL;
}

Character::Character(const Character &type)
{
    *this = type;
}

void Character::equip(AMateria* m)
{
    if(this->m_count < 4)
    {
        this->pull[this->m_count] = m;
        this->m_count++;
    }
}

void Character::unequip(int idx)
{
    if(this->pull[idx])
    {
        AMateria **newpull = this->pull;
        delete [] this->pull;
        this->pull = new AMateria*[4];
        for(int i = 0, g = 0; g < this->m_count; g++)
        {
            if(g != idx)
            {
                this->pull[i] = newpull[g];
                i++;
            }
        }
        delete [] newpull;
        this->m_count--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx <= 3 && idx <= this->m_count)
    {
        this->pull[idx]->use(target);
    }
}

std::string const & Character::getName() const
{
    return(this->name);
}

Character::~Character()
{
    for (int i = 0; i < this->m_count; i++)
		delete this->pull[i];
}

Character & Character::operator=(const Character &type)
{
    this->m_count = type.m_count;
    this->name = type.name;
    this->pull = type.pull;
    return(*this);
}