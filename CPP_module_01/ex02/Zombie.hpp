/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:21:08 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:14:54 by atomatoe         ###   ########.fr       */
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
	std::string get_type() const;
	void anounce() const;
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif
