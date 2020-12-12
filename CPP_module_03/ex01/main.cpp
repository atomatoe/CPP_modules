/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 13:20:41 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap HumanA("Jack");
    FragTrap HumanB("Mark");
    FragTrap HumanC("Louce");
    ScavTrap TrapA("Evil");
    ScavTrap TrapB("Spirit");
    ScavTrap TrapC("Ghost");


    TrapA.novicate_door("Jack");
    HumanA.takeDamage(30);

    TrapB.novicate_door("Mark");
    HumanB.takeDamage(30);

    TrapC.novicate_door("Louce");
    HumanC.takeDamage(30);

    TrapB.novicate_door("Jack");
    HumanA.takeDamage(30);

    TrapC.novicate_door("Mark");
    HumanB.takeDamage(30);

    std::cout << std::endl;
    std::cout << "Human is attack ScavTrap!" << std::endl;
    std::cout << std::endl;

    HumanA.rangedAttack("Evil");
    TrapA.takeDamage(20 - 5);

    HumanB.meleeAttack("Spirit");
    TrapB.takeDamage(30 - 5);

    HumanC.vaulthunter_dot_exe("Ghost");
    TrapC.takeDamage(20);
}