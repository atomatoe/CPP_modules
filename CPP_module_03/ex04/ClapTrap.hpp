/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:58:42 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:57:01 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
      
class ClapTrap 
{
protected:
    std::string name;
    int hit_point;
    int max_hit_point;
    int energy_point;
    int max_energy_point;
    int level;
    int melee_attack;
    int ranged_attack;
    int armor_reduction;
public:
    ClapTrap(std::string value);
    ClapTrap(const ClapTrap &type);
    ClapTrap & operator=(const ClapTrap &);
    ClapTrap(std::string name, int hp, int max_hp, int energ, int max_energ, int level, int melee_a, int rang_a, int arm_red);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(int amount);
    void beRepaired(int amount);
    ~ClapTrap(); // деструктор
    //geters
    std::string get_name();
    int get_energy();
    int get_melee_attack();
    int get_hit_point();
    int get_max_hit_point();
    int get_ranged_attack();
    int get_armor_reduction();
    void set_energy(int value);
};

#endif