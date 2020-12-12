/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:16:26 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/07 14:57:33 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
      
class FragTrap: virtual public ClapTrap
{
public:
    FragTrap(); // стандартный конструктор
    FragTrap(const FragTrap &type);
    FragTrap & operator=(const FragTrap &);
    void vaulthunter_dot_exe (std::string const & target);
    void ranged_damage();
    ~FragTrap(); // деструктор
    // seters
    void get_statistic();
};

#endif