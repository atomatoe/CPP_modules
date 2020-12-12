/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:12:03 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:06:27 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

	// гетеры
    int			Pony::get_year() const { return this->year; }
	int			Pony::get_sleep() const { return this->sleep; }
	int			Pony::get_job() const { return this->job; }
	int			Pony::get_fly() const { return this->fly; }
	std::string Pony::get_name() const { return this->name; }
	// сетеры
	void Pony::set_year(int value) { this->year = value; }
	void Pony::set_sleep(int value) { this->sleep = value; }
	void Pony::set_job(int value) { this->job = value; }
	void Pony::set_fly(int value) { this->fly = value; }
	void Pony::set_name(std::string value) { this->name = value; }
