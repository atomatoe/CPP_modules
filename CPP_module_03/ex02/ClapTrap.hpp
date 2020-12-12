/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:58:42 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:44:13 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
      
class ClapTrap 
{
protected:
    std::string name;
    unsigned int hit_point;
    unsigned int max_hit_point;
    unsigned int energy_point;
    unsigned int max_energy_point;
    int level;
    int melee_attack;
    int ranged_attack;
    int armor_reduction;
public:
    ClapTrap(std::string value);
    ClapTrap(const ClapTrap &type);
    ClapTrap & operator=(const ClapTrap &);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap(); // деструктор
    //geters
    std::string get_name();
    int get_energy();
    void set_energy(int value);
};

#endif