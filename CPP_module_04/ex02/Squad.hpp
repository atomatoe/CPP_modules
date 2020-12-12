/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:35:03 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:21:11 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
    int count_unit;
    ISpaceMarine **unit;
public:
    Squad();
    Squad(const Squad &type);
    Squad & operator=(const Squad &type);
    virtual ~Squad();
    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);
};

#endif