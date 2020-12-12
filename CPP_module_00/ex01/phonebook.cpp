/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 21:42:46 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/03 17:53:45 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int get_person(Joy *Koin, int i)
{
    std::string buffer;

	std::cout << "--- Записная книжка ---" << std::endl;
    std::cout << "Введите ваш first name:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_first_name(buffer);
    std::cout << "Введите ваш last name:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_last_name(buffer);
    std::cout << "Введите ваш nickname:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_nickname(buffer);
    std::cout << "Введите ваш login:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_login(buffer);
    std::cout << "Введите ваш postal adress:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_postal_adress(buffer);
    std::cout << "Введите ваш email adress:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_email_adress(buffer);
    std::cout << "Введите ваш phone number:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_phone_number(buffer);
    std::cout << "Введите ваш birthday date:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_birthday_date(buffer);
    std::cout << "Введите ваш favorite meal:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_favorite_meal(buffer);
    std::cout << "Введите ваш underwear color:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_underwear_color(buffer);
    std::cout << "Введите ваш darkest secret:" << std::endl;
    std::getline(std::cin, buffer);
	Koin[i].set_darkest_secret(buffer);
	if(Koin[i].get_first_name() == "" || Koin[i].get_last_name() == "" || Koin[i].get_nickname() == "")
	{
		i--;
		std::cout << "Ошибка!\nНеобходимо заполнить первые три поля обязательно!" << std::endl;
	}
	else
    	std::cout << "Профиль " << Koin[i].get_first_name() << " " << Koin[i].get_last_name() << " создан!" << std::endl;
	return(i);
}

static std::string string_len(std::string str)
{
	if(str.length() >= 10)
		str = str.substr(0, 9) + '.';
	return(str);
}

static int ft_str_digit(std::string command)
{
	for(int i = 0; command[i]; i++)
	{
		if(isdigit(command[i]) == 0)
			return(-1);
		if(i > 0)
			return(-1);
	}
	return(0);
}

static void	print_person(Joy *Koin, int i)
{
	if(Koin[i].get_first_name() != "" && Koin[i].get_last_name() != "" && Koin[i].get_nickname() != "")
	{
		std::cout << "first name: " << Koin[i].get_first_name() << std::endl;
		std::cout << "last name: " << Koin[i].get_last_name() << std::endl;
		std::cout << "nickname: " << Koin[i].get_nickname() << std::endl;
		std::cout << "login: " << Koin[i].get_login() << std::endl;
		std::cout << "postaladress: " << Koin[i].get_postal_adress() << std::endl;
		std::cout << "email adress: " << Koin[i].get_email_adress() << std::endl;
		std::cout << "phone number: " << Koin[i].get_phone_number() << std::endl;
		std::cout << "birthday date: " << Koin[i].get_birthday_date() << std::endl;
		std::cout << "favorite meal: " << Koin[i].get_favorite_meal() << std::endl;
		std::cout << "underwear color: " << Koin[i].get_underwear_color() << std::endl;
		std::cout << "darkest secret: " << Koin[i].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Вы ввели неправильный индекс! Повторите SEARCH" << std::endl;
}

static void ft_search(Joy *Koin, int i)
{
    std::cout << "Ваша записная книжка:" << std::endl;
	std::cout << "|    ID    |   Имя    | Фамилия  | Никнейм  |" << std::endl;
    for(int index = 0; index < i;)
    {
		std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << string_len(Koin[index].get_first_name())
			<< "|" << std::setw(10) << string_len(Koin[index].get_last_name()) << "|"
			<< std::setw(10) << string_len(Koin[index].get_nickname()) << "|" << std::endl;
        index++;
    }
	std::cout << "Введите индекс необходимого контакта:" << std::endl;
	std::string command;
	int index_contact;

	while(1)
    {
		std::getline(std::cin >> std::ws, command);
		if (command.compare(0, command.length(), "EXIT") == 0)
			break ;
        else if(ft_str_digit(command) == 0)
		{
            index_contact = std::stoi(command);
			if(index_contact > 7 || index_contact > i)
				std::cout << "Вы ввели неправильный индекс!" << std::endl;
			else
			{
				print_person(Koin, index_contact);
				break ;
			}
		}
		else
			std::cout << "Вы ввели неправильный индекс!" << std::endl; 
    }
}

int main()
{
    Joy Koin[8];
    std::string command;

    for(int i = 0; 1;)
    {
		std::getline(std::cin >> std::ws, command);
        if (command.compare(0, command.length(), "ADD") == 0 && i < 8)
        {
            i = get_person(Koin, i);
            i++;
        }
        else if (command.compare(0, command.length(), "EXIT") == 0)
            break ;
        else if (command.compare(0, command.length(), "SEARCH") == 0)
            ft_search(Koin, i);
    }
	return (0);
}
