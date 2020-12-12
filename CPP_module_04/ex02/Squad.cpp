/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:35:04 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:28:25 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    this->count_unit = 0;
    this->unit = 0;
}

Squad::Squad(const Squad &type)
{
    *this = type;
}

Squad::~Squad()
{
    for (int i = 0; i < this->count_unit; i++)
        delete this->unit[i];
	delete this->unit;
}

int Squad::getCount() const
{
    return(this->count_unit);
}

int Squad::push(ISpaceMarine *name)
{
    if(!name)
        return(this->count_unit);
    else
    {
        if(this->count_unit == 0)
        {
            unit = new ISpaceMarine*[1];
            unit[0] = name;
            this->count_unit++;
        }
        else
        {
            this->count_unit += 1;
            ISpaceMarine** newUnit = this->unit;
            this->unit = new ISpaceMarine*[this->count_unit];
            for (int i = 0; i < this->count_unit - 1; ++i) {
                this->unit[i] = newUnit[i];
            }
            delete [] newUnit;
            this->unit[this->count_unit - 1] = name;
        }
    }
    return(this->getCount());
}

ISpaceMarine* Squad::getUnit(int index) const
{
    if(index >= 0 && index < count_unit)
        return(unit[index]);
    else
    {
        // std::cout << "Ошибка! индекса, юнита нет!" << std::endl;
        return(NULL);
    }
}

Squad & Squad::operator=(const Squad &type)
{
    for (int i = 0; i < this->count_unit; i++)
		delete this->unit[i];
	delete this->unit;
    this->count_unit = type.getCount();
    if(this->count_unit != 0)
        this->unit = new ISpaceMarine*[this->count_unit + 1];
    for (int count = 0; count < type.getCount(); count++)
    {
	    this->unit[count] = type.getUnit(count)->clone();
    }
    return(*this);
}