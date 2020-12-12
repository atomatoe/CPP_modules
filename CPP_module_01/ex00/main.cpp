/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:12:24 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/06 21:08:36 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

int ft_str_digit(std::string command)
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

void ponyOnTheHeap(void)
{
    std::string command;
    int pony_count;

    Pony *Red = new Pony;
    if(!Red)
        exit(1);
    std::cout << "Отлично, ты выбрал режим HEAP, давай я немного расскажу о правилах:" << std::endl;
	std::cout << "1) Ты задаешь количество Pony: (не более 9)" << std::endl;
    while(1)
    {
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
                break ;
    }
    pony_count = std::stoi(command);
    std::cout << "1) у нас получилось " << pony_count << " Pony's, ты должен дать каждому имя:" << std::endl;
    for(int i = 0; i != pony_count;)
    {
        std::getline(std::cin >> std::ws, command);
        Red[i].set_name(command);
        std::cout << "Pony " << Red[i].get_name() << " готов!" << std::endl;
        i++;
    }
    std::cout << "Отлично, теперь нужно задать сколько времени Pony спит, летает и работает!" << std::endl;
    for(int i = 0; i != pony_count;)
    {
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " спит? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_sleep(std::stoi(command));
        else
            Red[i].set_sleep(1);
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " летает? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_fly(std::stoi(command));
        else
            Red[i].set_fly(1);
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " работает? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_job(std::stoi(command));
        else
            Red[i].set_job(1);
        std::cout << "Отлично, Pony " << Red[i].get_name() << " готов!" << std::endl;
        i++;
    }
    std::cout << "Великолепно! Вот-вот мы можем приступить!" << std::endl;
    sleep(1);
    std::cout << "Давай я тебе немного расскажу про жизнь наших Pony:" << std::endl;
    sleep(2);
    std::cout << "Наши Pony живут в нашем мире один год, затем они улетают в другой мир." << std::endl;
    sleep(2);
    std::cout << "Их год проходит очень быстро: они успевают только поспать, полетать и поработать, прежде чем улетят." << std::endl;
    sleep(2);
    std::cout << "Каждого Pony отделяет их качества: кто-то долго спит, кто-то дольше работает, у них есть свои имена." << std::endl;
    sleep(2);
    std::cout << "Однако есть одна проблема: наш мир нужно охранять, поэтому только один Pony находится в городе." << std::endl;
    sleep(2);
    std::cout << "Именно за этим Pony тебе придется наблюдать!" << std::endl;
    sleep(1);
    std::cout << "Если ты готов приступать, напиши START в консоль!" << std::endl;
    while(1)
    {
        std::getline(std::cin >> std::ws, command);
        if (command.compare(0, command.length(), "START") == 0)
            break ;
    }
    for(int i = 0; i != pony_count;)
    {
        std::cout << Red[i].get_name() << " вышел из охраны и начал жизнь в городе!" << std::endl;
        std::cout << Red[i].get_name() << " спит" << std::endl;
        sleep(Red[i].get_sleep());
        std::cout << Red[i].get_name() << " проснулся и летает" << std::endl;
        sleep(Red[i].get_fly());
        std::cout << Red[i].get_name() << " прилетел и пошел работать" << std::endl;
        sleep(Red[i].get_job());
        std::cout << "Год завершился! " << Red[i].get_name() << " улетел в другой мир!" << std::endl;
        i++;
    }
    std::cout << "┈┈┈┈┈┈┈┈┈┈▅┈┈▕▀┈┈┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈▕┈┈┈╱╲▕▀┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈╱╲┈┈▏▕╱╲┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈▏▕╱╲▏▎▏▕╱╲┈▃┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈╱╲▏▎▅▂▅▂▏▎▏▎▏▏┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▂▏▎▏▕╭┳┳╮▏┊▏▕╱╲┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▏▏┊▏▎┃┊┊┃▏▎▏▎▏▕┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▇▆▅▃▂┻┻┻┻▂▃▅▆▇▉┈┈┈┈┈┈" << std::endl;  
    std::cout << "О нет, наш город теперь никто не охраняет! Все Pony улетели в другой мир!" << std::endl;
    std::cout << "Напиши команду STACK чтобы снова призвать 3 Pony's или команду HEAP, чтобы призвать определенное количество Pony's." << std::endl;
    delete Red;
}

void ponyOnTheStack(void)
{
    Pony Red[3];
    std::string command;

    std::cout << "Отлично, ты выбрал режим STACK, давай я немного расскажу о правилах:" << std::endl;
	std::cout << "1) у нас ограниченное количество Pony's их трое, ты должен дать каждому имя:" << std::endl;
    for(int i = 0; i != 3;)
    {
        std::getline(std::cin >> std::ws, command);
        Red[i].set_name(command);
        std::cout << "Pony " << Red[i].get_name() << " готов!" << std::endl;
        i++;
    }
    std::cout << "Отлично, теперь нужно задать сколько времени Pony спит, летает и работает!" << std::endl;
    for(int i = 0; i != 3;)
    {
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " спит? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_sleep(std::stoi(command));
        else
            Red[i].set_sleep(1);
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " летает? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_fly(std::stoi(command));
        else
            Red[i].set_fly(1);
        std::cout << "Сколько времени в секундах " << Red[i].get_name() << " работает? (не более 9)" << std::endl;
        std::getline(std::cin >> std::ws, command);
        if(ft_str_digit(command) == 0)
            Red[i].set_job(std::stoi(command));
        else
            Red[i].set_job(1);
        std::cout << "Отлично, Pony " << Red[i].get_name() << " готов!" << std::endl;
        i++;
    }
    std::cout << "Великолепно! Вот-вот мы можем приступить!" << std::endl;
    sleep(1);
    std::cout << "Давай я тебе немного расскажу про жизнь наших Pony:" << std::endl;
    sleep(2);
    std::cout << "Наши Pony живут в нашем мире один год, затем они улетают в другой мир." << std::endl;
    sleep(2);
    std::cout << "Их год проходит очень быстро: они успевают только поспать, полетать и поработать, прежде чем улетят." << std::endl;
    sleep(2);
    std::cout << "Каждого Pony отделяет их качества: кто-то долго спит, кто-то дольше работает, у них есть свои имена." << std::endl;
    sleep(2);
    std::cout << "Однако есть одна проблема: наш мир нужно охранять, поэтому только один Pony находится в городе." << std::endl;
    sleep(2);
    std::cout << "Именно за этим Pony тебе придется наблюдать!" << std::endl;
    sleep(1);
    std::cout << "Если ты готов приступать, напиши START в консоль!" << std::endl;
    while(1)
    {
        std::getline(std::cin >> std::ws, command);
        if (command.compare(0, command.length(), "START") == 0)
            break ;
    }
    for(int i = 0; i != 3;)
    {
        std::cout << Red[i].get_name() << " вышел из охраны и начал жизнь в городе!" << std::endl;
        std::cout << Red[i].get_name() << " спит" << std::endl;
        sleep(Red[i].get_sleep());
        std::cout << Red[i].get_name() << " проснулся и летает" << std::endl;
        sleep(Red[i].get_fly());
        std::cout << Red[i].get_name() << " прилетел и пошел работать" << std::endl;
        sleep(Red[i].get_job());
        std::cout << "Год завершился! " << Red[i].get_name() << " улетел в другой мир!" << std::endl;
        i++;
    }
    std::cout << "┈┈┈┈┈┈┈┈┈┈▅┈┈▕▀┈┈┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈▕┈┈┈╱╲▕▀┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈╱╲┈┈▏▕╱╲┈┈┈┈┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈┈┈▏▕╱╲▏▎▏▕╱╲┈▃┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈┈╱╲▏▎▅▂▅▂▏▎▏▎▏▏┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▂▏▎▏▕╭┳┳╮▏┊▏▕╱╲┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▏▏┊▏▎┃┊┊┃▏▎▏▎▏▕┈┈┈┈┈┈" << std::endl;
    std::cout << "┈┈┈┈┈┈▇▆▅▃▂┻┻┻┻▂▃▅▆▇▉┈┈┈┈┈┈" << std::endl;  
    std::cout << "О нет, наш город теперь никто не охраняет! Все Pony улетели в другой мир!" << std::endl;
    std::cout << "Напиши команду STACK чтобы снова призвать 3 Pony's или команду HEAP, чтобы призвать определенное количество Pony's." << std::endl;
}

int main ()
{
    std::string command;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "               Добро пожаловать в мир Pony!         " << std::endl << std::endl; 
    std::cout << "----------------------------------------------------"<< std::endl;
    std::cout << "----------------------------------------------------"<< std::endl;
    std::cout << "____________________________¶¶¶_____________________" << std::endl;
    std::cout << "___________________________¶¶¶¶¶____________________" << std::endl;
    std::cout << "___________________________¶_¶¶¶¶___________________" << std::endl;
    std::cout << "___________________________¶_¶¶¶____________________" << std::endl;
    std::cout << "____________________________¶_¶_____________________" << std::endl;
    std::cout << "____________________________¶_¶¶____________________" << std::endl;
    std::cout << "___________________________¶_¶¶¶____________________" << std::endl;
    std::cout << "____¶¶_____________________¶¶¶¶¶____________________" << std::endl;
    std::cout << "____¶¶¶¶¶¶¶¶¶_____________¶¶¶¶¶¶____________________" << std::endl;
    std::cout << "_____¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶¶¶¶¶____________________" << std::endl;
    std::cout << "____¶¶¶¶¶_¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶_____________________" << std::endl;
    std::cout << "____¶¶_¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶______________________" << std::endl;
    std::cout << "___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶_¶¶¶¶¶¶____________________" << std::endl;
    std::cout << "___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶__________________" << std::endl;
    std::cout << "__¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶____________" << std::endl;
    std::cout << "__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____" << std::endl;
    std::cout << "__¶¶¶¶¶______¶¶¶¶¶¶¶¶¶¶¶¶___¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶¶____" << std::endl;
    std::cout << "_____________¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶___¶¶¶¶___" << std::endl;
    std::cout << "______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶____¶¶¶___" << std::endl;
    std::cout << "______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶¶___" << std::endl;
    std::cout << "______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶¶__" << std::endl;
    std::cout << "_____________¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶_______¶___" << std::endl;
    std::cout << "____________¶¶¶¶___¶¶¶¶_¶¶¶¶______¶¶¶¶¶¶¶¶__________" << std::endl;
    std::cout << "___________¶¶¶______¶¶¶___________¶¶¶¶_¶¶¶¶_________" << std::endl;
    std::cout << "__________¶¶¶________¶¶___________¶¶¶____¶¶¶________" << std::endl;
    std::cout << "__________¶¶_________¶¶___________¶¶¶_____¶¶________" << std::endl;
    std::cout << "_________¶¶__________¶¶¶_________¶¶_______¶¶________" << std::endl;
    std::cout << "________¶¶¶___________¶¶________¶¶_________¶¶_______" << std::endl;
    std::cout << "________¶¶____________¶¶¶______¶¶¶_________¶¶¶______" << std::endl;
    std::cout << "_______¶¶¶_____________¶¶¶____¶¶____________¶¶______" << std::endl;
    std::cout << "_______¶¶_____________¶¶¶____¶¶¶___________¶¶¶______" << std::endl;
    std::cout << "_____________________¶¶¶¶____¶¶_____________________" << std::endl;
    std::cout << "____________________________________________________" << std::endl;
    std::cout << "_________________________________________by atomatoe" << std::endl;
    std::cout << "Приветствую тебя, игрок: выбери режим памяти: HEAP или STACK (введи необходимое слово)" << std::endl;
    while(1)
	{
		std::getline(std::cin >> std::ws, command);
		if (command.compare(0, command.length(), "HEAP") == 0)
		{
			ponyOnTheHeap();
		}
		else if (command.compare(0, command.length(), "STACK") == 0)
		{
			ponyOnTheStack();
		}
		else if (command.compare(0, command.length(), "EXIT") == 0)
			break ;
		else
			std::cout << "Не пытайся меня сломать! Если ты хочешь выйти - достаточно написать EXIT..." << std::endl;
	}
	std::cout << "Надеюсь ты вернешься! Мы будем скучать!" << std::endl;
    sleep(2);
    std::cout << "......................................." << std::endl;
    std::cout << ".............................30/11/2020" << std::endl;
    std::cout << "..............................School 21" << std::endl;
    std::cout << "......................................." << std::endl;
    std::cout << ".........POWERED......................." << std::endl;
    std::cout << "................BY....................." << std::endl;
    std::cout << "..................atomatoe............." << std::endl;
    std::cout << "......................................." << std::endl;
    std::cout << "......................................." << std::endl;
    return(0);
}