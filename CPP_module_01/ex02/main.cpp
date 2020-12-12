/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:21:54 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:20:00 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int ft_str_digit(std::string command)
{
	for(int i = 0; command[i]; i++)
	{
		if(isdigit(command[i]) == 0)
			return(-1);
		if(i > 3)
			return(-1);
	}
	return(0);
}

int main()
{
    std::string command;
    Zombie *Red[100];
    ZombieEvent zE;

    std::cout << "Приветствую!" << std::endl;
    std::cout << "Добро пожаловать в редактор Zombie" << std::endl;
    std::cout << "Пару правил: каждый зомби имеет свое имя и тип." << std::endl;
    std::cout << "Вы можете вручную задать имя, или же задать рандомное командой RANDOM." << std::endl;
    std::cout << "Начальный тип создаваемых Zombie - atomatoe's" << std::endl;
    std::cout << "Чтобы изменить тип Zombie - введите команду SETTYPE" << std::endl;
    std::cout << "Чтобы увидеть всех созданных Zombie введите команду announce" << std::endl;
    std::cout << "Пора приступать... Чтобы выйти напишите EXIT" << std::endl;
    zE.setZombieType("atomatoe's");
    for(int i = 1; i < 99; i++)
    {
        std::cout << "Задайте имя для Zombie, или введите одну из команд: SETTYPE RANDOM announce" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if (command.compare(0, command.length(), "SETTYPE") == 0)
        {
            std::cout << "Задайте новый тип:" << std::endl;
            std::getline(std::cin >> std::ws, command);
            zE.setZombieType(command);
            i--;
        }
        else if (command.compare(0, command.length(), "RANDOM") == 0)
            Red[i] = zE.randomChump();
        else if (command.compare(0, command.length(), "announce") == 0)
        {
            for(int g = 1; g != i; g++)
                Red[g]->anounce();
            i--;
        }
        else if (command.compare(0, command.length(), "EXIT") == 0)
        {
            for(int g = 0; g < i;)
            {
                delete Red[i];
                i--;
            }
            break ;
        }
        else if(command != "")
            Red[i] = zE.newZombie(command);
    }
    delete *Red;
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