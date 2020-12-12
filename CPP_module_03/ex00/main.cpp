/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:39:16 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap HumanA("Jack");
    FragTrap HumanB("Mark");
    FragTrap HumanC("Louce");

    while(1)
    {
        HumanA.rangedAttack("Mark");
        HumanB.takeDamage(20 - 5);
        sleep(2);
        HumanB.meleeAttack("Louce");
        HumanC.takeDamage(30 - 5);
        sleep(2);
        HumanC.rangedAttack("Jack");
        HumanA.takeDamage(20 - 5);
        sleep(2);
        HumanA.vaulthunter_dot_exe("Mark");
        HumanB.takeDamage(20);
        sleep(2);
        HumanB.vaulthunter_dot_exe("Louce");
        HumanC.takeDamage(20);
        sleep(2);
    }
}