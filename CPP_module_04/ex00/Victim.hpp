/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:13:28 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 13:18:43 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
      
class Victim
{
protected:
    std::string name;
    Victim();
public:
    Victim(std::string value); // стандартный конструктор
    Victim(const Victim &type);
    Victim & operator=(const Victim &);
    void setName(std::string value);
    void my_text(void) const;
    virtual void getPolymorphed() const;
    std::string getName() const;
    ~Victim(); // деструктор
};

std::ostream & operator<<(std::ostream &out, const Victim &victim);

#endif