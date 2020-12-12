/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:44:41 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 12:52:26 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
    std::string out_attack;
public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &type);
    PlasmaRifle & operator=(const PlasmaRifle &);
    virtual void attack() const;
    ~PlasmaRifle();
};

#endif