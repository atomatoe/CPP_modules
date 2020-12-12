/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:53:57 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/01 14:53:08 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Joy
{
private:
    int			index;
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

public:
	// гетеры
	int			get_index() { return index; }
	std::string get_first_name() { return first_name; }
	std::string get_last_name() { return last_name; }
	std::string get_nickname() { return nickname; }
	std::string get_login() { return login; }
	std::string get_postal_adress() { return postal_adress; }
	std::string get_email_adress() { return email_adress; }
	std::string get_phone_number() { return phone_number; }
	std::string get_birthday_date() { return birthday_date; }
	std::string get_favorite_meal() { return favorite_meal; }
	std::string get_underwear_color() { return underwear_color; }
	std::string get_darkest_secret() { return darkest_secret; }
	// сетеры
	void set_index(int value) { index = value; }
	void set_first_name(std::string value) { first_name = value; }
	void set_last_name(std::string value) { last_name = value; }
	void set_nickname(std::string value) { nickname = value; }
	void set_login(std::string value) { login = value; }
	void set_postal_adress(std::string value) { postal_adress = value; }
	void set_email_adress(std::string value) { email_adress = value; }
	void set_phone_number(std::string value) { phone_number = value; }
	void set_birthday_date(std::string value) { birthday_date = value; }
	void set_favorite_meal(std::string value) { favorite_meal = value; }
	void set_underwear_color(std::string value) { underwear_color = value; }
	void set_darkest_secret(std::string value) { darkest_secret = value; }
};

#endif
