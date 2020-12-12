/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:26 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:40:35 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
      
class FragTrap
{
private:
    std::string name;
    unsigned int hit_point;
    unsigned int max_hit_point;
    unsigned int energy_point;
    unsigned int max_energy_point;
    unsigned int level;
    unsigned int melee_attack;
    unsigned int ranged_attack;
    unsigned int armor_reduction;

public:
    FragTrap(std::string value); // стандартный конструктор
    FragTrap(const FragTrap &);
    FragTrap & operator=(const FragTrap &);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe (std::string const & target);
    ~FragTrap(); // деструктор
};

#endif