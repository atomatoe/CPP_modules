/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:36:17 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/12 14:18:46 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    try
    {
        std::vector<int> myVector;

        myVector.push_back(2); // добавление элемента в контейнер
        myVector.push_back(15);
        myVector.push_back(100);
        std::cout << "Количество элементов в контейнере: " << myVector.size() << std::endl; // количество элементов в контейнере

        std::cout << *easyfind(myVector, 16) << std::endl;
    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
}