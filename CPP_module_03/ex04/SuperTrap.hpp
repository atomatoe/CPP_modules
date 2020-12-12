/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:03:45 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 15:00:04 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"


class SuperTrap: public FragTrap, public NinjaTrap
{
public:
    SuperTrap(const std::string &name); // конструктор дефолтный
    SuperTrap(const SuperTrap &type);
    SuperTrap & operator=(const SuperTrap &);
    void rangedAttack();
    void meleeAttack();
    void get_statictic();
    ~SuperTrap(); // деструктор
};

#endif