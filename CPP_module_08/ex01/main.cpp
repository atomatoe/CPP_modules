/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:13:36 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 15:12:02 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(9);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span test = Span(15);
        test.addNumber(100);
        test.addNumber(120);
        test.addNumber(150);
        test.addNumber(170);
        test.addNumber(190);
        test.addNumber(200);
        test.addNumber(300); // 100 разница
        test.addNumber(260);
        test.addNumber(230);
        test.addNumber(200);
        test.addNumber(170);
        test.addNumber(150);
        test.addNumber(130);
        test.addNumber(101);
        test.addNumber(100); // 1 разница
        std::cout << std::endl;
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;


        Span test2 = Span(10); // 10 - недостаточно, необходимо 11
        test2.addNumber(30);
        test2.addNumber(40);
        test2.addNumber(30);
        test2.addNumber(40);
        test2.addNumber(31); // 9
        test2.addNumber(40);
        test2.addNumber(30);
        test2.addNumber(40);
        test2.addNumber(30);
        test2.addNumber(41); // 11
        test2.addNumber(30);
        std::cout << std::endl;
        std::cout << test2.shortestSpan() << std::endl;
        std::cout << test2.longestSpan() << std::endl;
    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
}