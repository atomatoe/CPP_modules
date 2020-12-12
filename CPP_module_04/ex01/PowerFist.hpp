/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:44:56 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 12:53:46 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    std::string out_attack;
public:
    PowerFist();
    PowerFist(const PowerFist &type);
    PowerFist & operator=(const PowerFist &);
    virtual void attack() const;
    ~PowerFist();
};

#endif