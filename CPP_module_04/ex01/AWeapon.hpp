/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:43:39 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 14:09:56 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
    std::string name;
    int damage;
    int ap_cost;
    std::string out_attack;
    AWeapon();
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon &type);
    AWeapon & operator=(const AWeapon &);
    std::string getName() const;
    virtual void attack() const = 0;
    int getAPCost() const;
    int getDamage() const;
    ~AWeapon();
};

#endif