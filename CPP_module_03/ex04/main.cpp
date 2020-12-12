/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:57:11 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap Demon;
    NinjaTrap Georg;

    SuperTrap god("atomatoe");

    std::cout << "\n"; 
    Georg.get_statistic();
    Demon.get_statistic();
    god.get_statictic();
    god.meleeAttack();
    god.rangedAttack();
    std::cout << "\n";
}