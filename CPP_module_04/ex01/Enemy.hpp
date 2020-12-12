/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:44:32 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 12:52:17 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
    std::string type;
    int hp;
    Enemy();
public:
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy &type);
    Enemy & operator=(const Enemy &);
    ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif