/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:37:41 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:24:44 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int ft_str_digit(std::string command)
{
	for(int i = 0; command[i]; i++)
	{
		if(isdigit(command[i]) == 0)
			return(-1);
		if(i > 8)
			return(-1);
	}
	return(0);
}

int main()
{
    std::string command;

    std::cout << "Приветствую!" << std::endl;
    std::cout << "Добро пожаловать в редактор Zombie" << std::endl;
    std::cout << "Пару правил: каждый зомби имеет свое имя." << std::endl;
    std::cout << "Имена Zombie даются случайным образом." << std::endl;
    std::cout << "Вы выбираете какое количество Zombie произвести." << std::endl;
    std::cout << "Чтобы увидеть всех созданных Zombie введите команду announce" << std::endl;
    std::cout << "Пора приступать..." << std::endl;
    std::cout << "Какое количество Zombie вы хотите создать?" << std::endl;
    while(1)
    {
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            break ;
        else
            std::cout << "Не пытайся меня сломать!" << std::endl;
    }
    int memory = stoi(command);
    ZombieHorde zH(memory);
    std::cout << "Все Zombie созданы! Чтобы увидеть их список введите announce или EXIT чтобы выйти!" << std::endl;
    while(1)
    {
        std::getline(std::cin >> std::ws, command);
        if (command.compare(0, command.length(), "announce") == 0)
        {
            zH.anounce();
        }
        else if (command.compare(0, command.length(), "EXIT") == 0)
            break ;
        else
            std::cout << "Не пытайся меня сломать! Если хочешь выйти, достаточно написать EXIT..." << std::endl;
    }
    std::cout << "......................................." << std::endl;
    std::cout << ".............................01/12/2020" << std::endl;
    std::cout << "..............................School 21" << std::endl;
    std::cout << "......................................." << std::endl;
    std::cout << ".........POWERED......................." << std::endl;
    std::cout << "................BY....................." << std::endl;
    std::cout << "..................atomatoe............." << std::endl;
    std::cout << "......................................." << std::endl;
    std::cout << "......................................." << std::endl;
    return (0);
}