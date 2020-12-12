/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:24 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:12:11 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
      
class Sorcerer
{
private:
    std::string name;
    std::string title;
    Sorcerer();
public:
    Sorcerer(std::string value, std::string value2); // стандартный конструктор
    Sorcerer(const Sorcerer &type);
    Sorcerer & operator=(const Sorcerer &);
    void my_text(void) const;
    void polymorph(Victim const &victim) const;
    std::string getName() const;
    std::string getTitle() const;
    ~Sorcerer(); // деструктор
};

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorc);

#endif