/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 13:38:36 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <unistd.h>

int main()
{
    FragTrap FragTrap;
    ClapTrap ClapTrap("ClapTrap");
    ScavTrap ScavTrap;
    NinjaTrap NinjaTrap;

    std::cout << std::endl;
    NinjaTrap.ninjaShoebox(FragTrap);
    NinjaTrap.ninjaShoebox(ClapTrap);
    NinjaTrap.ninjaShoebox(ScavTrap);
    NinjaTrap.ninjaShoebox(NinjaTrap);
    std::cout << std::endl;
}