/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:21 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:12:52 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
      
class Peon : public Victim
{
public:
    Peon(std::string value); // стандартный конструктор
    Peon(const Peon &type);
    Peon & operator=(const Peon &);
    virtual void getPolymorphed() const;
    ~Peon(); // деструктор
};

std::ostream & operator<<(std::ostream &out, const Peon &peon);

#endif