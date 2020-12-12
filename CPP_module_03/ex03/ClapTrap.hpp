/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:58:42 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 18:45:28 by atomatoe         ###   ########.fr       */
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
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(int amount);
    void beRepaired(int amount);
    ~ClapTrap(); // деструктор
    //geters
    std::string get_name();
    int get_energy();
    void set_energy(int value);
};

#endif