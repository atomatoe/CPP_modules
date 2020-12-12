/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:48:53 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/10 21:51:18 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <time.h>

struct Data
{
    std::string s1; 
    int n; 
    std::string s2;
};

Data * deserialize (void * raww)
{
    Data *all = new Data;
    char *raw = static_cast<char *>(raww);
    for(int i = 0; i < 8; i++)
        all->s1 += raw[i];
    all->n = *reinterpret_cast<int *>(raw + 8);
    int count = 0;
    for(int i = 12; i < 20; i++)
    {
        all->s2 += raw[i];
        count++;
    }
    return(all);
}

void * serialize (void)
{
    char *pull = new char[20];
    char str[63] = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < 8; i++)
        pull[i] = str[rand() % 62];
    *reinterpret_cast<int *>(pull + 8) = rand();
    for(int i = 12; i < 20; i++)
        pull[i] = str[rand() % 20];
    return(pull);
}

void printPull(char *pull) {
    for(int i = 0; i < 8; i++)
        std::cout << pull[i];
    std::cout << std::endl;
    std::cout << *reinterpret_cast<int *>(pull + 8) << std::endl;
    for(int i = 12; i < 20; i++)
       std::cout << pull[i];
    std::cout << std::endl;
}

int main()
{
	Data *all;
    char *pull = new char(20);

    std::srand(time(NULL));
    pull = static_cast<char *>(serialize());
    printPull(pull);
    all = deserialize(pull);
    std::cout << std::endl;
	std::cout << all->s1 << std::endl;
	std::cout << all->n << std::endl;
	std::cout << all->s2 << std::endl;
    delete all;
	return 0;
}

// 8 байт - число-символы == s1
// 4 байта - цифры int обернутые через dynamic cast в char == n
// 8 байт - число-символы == s2