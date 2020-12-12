/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:37:57 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:22:49 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>

class Zombie
{
private:
	std::string _name;
	std::string _type;
public:
	std::string get_name() const;
	void anounce() const;
	Zombie();
	~Zombie();
};

#endif

