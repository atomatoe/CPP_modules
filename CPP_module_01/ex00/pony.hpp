/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:12:25 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:06:38 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>

class Pony
{
private:
    int			year;
	int			sleep;
	int			job;
	int			fly;
	std::string name;

public:
	// гетеры
	int			get_year() const;
	int			get_sleep() const;
	int			get_job() const;
	int			get_fly() const;
	std::string get_name() const;
	// сетеры
	void set_year(int value);
	void set_sleep(int value);
	void set_job(int value);
	void set_fly(int value);
	void set_name(std::string value);
};

#endif
