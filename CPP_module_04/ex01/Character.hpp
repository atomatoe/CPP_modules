/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:44:12 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:10:03 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    AWeapon *weapon;
    int ap;
    Character();
public:
    Character(std::string const & name);
    ~Character();
    Character(const Character &type);
    Character & operator=(const Character &);
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy *enemy);
    int getAp() const;
    std::string getName() const;
    AWeapon* getWeapon() const;
};

std::ostream & operator<<(std::ostream &out, const Character &character);

#endif