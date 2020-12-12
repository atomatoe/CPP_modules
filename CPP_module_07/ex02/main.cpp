/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:12:30 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 13:11:31 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        std::cout << std::endl;
        Array <int> test(2);
        test[0] = 1;
        test[1] = 15;
        std::cout << test[0] << std::endl;
        std::cout << test[1] << std::endl;

        std::cout << std::endl;
    
        Array <std::string> test2(2);
        test2[0] = "Hello";
        test2[1] = "world!";
        std::cout << test2[0] << std::endl;
        std::cout << test2[1] << std::endl;
        std::cout << std::endl;

        Array <std::string> test3;
        test3 = test2;
        std::cout << test3[0] << std::endl;
        std::cout << test3[1] << std::endl;
        std::cout << std::endl;

        Array <std::string> test4(test2);
        std::cout << test4[0] << std::endl;
        std::cout << test4[1] << std::endl;
        std::cout << std::endl;


    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return(0);
}