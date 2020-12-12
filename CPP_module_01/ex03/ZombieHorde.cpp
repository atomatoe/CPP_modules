/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:37:59 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:24:40 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n)
{
    zombies = new Zombie[n];
}

void ZombieHorde::anounce() const
{
    for (int i = 0; i < this->_n; ++i) {
        zombies[i].anounce();
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] this->zombies;
    std::cout << std::endl << "Zombies deleted!" << std::endl;
}
