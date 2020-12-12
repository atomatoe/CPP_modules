/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 13:23:38 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap Demon;
    ScavTrap Gigant;

    // общие методы
    Demon.ClapTrap::rangedAttack("Demon");
    Gigant.ClapTrap::takeDamage(15);
    Gigant.ClapTrap::rangedAttack("Evil");
    Demon.ClapTrap::takeDamage(15);

    // индивидуальные
    Demon.FragTrap::vaulthunter_dot_exe("Demon");
    Gigant.ClapTrap::takeDamage(20);

    Gigant.ScavTrap::novicate_door("Evil");
    Demon.ClapTrap::takeDamage(30);
}