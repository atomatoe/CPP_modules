/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:28:28 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/10 00:46:19 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 100; int b = 200;
    double c = 22.22; double d = 11.11;
    std::string c1 = "hello"; std::string d1 = "world";

    std::cout << std::endl;
    // swap int:
    std::cout << "Standart: " << a << " and " << b << std::endl ;
    my_swap<int>(a, b);
    std::cout << "Swap: " << a << " and " << b << std::endl ;

    std::cout << std::endl;
    // swap double:
    std::cout << "Standart: " << c << " and " << d << std::endl ;
    my_swap<double>(c, d);
    std::cout << "Swap: " << c << " and " << d << std::endl ;

    std::cout << std::endl;
    // swap string:
    std::cout << "Standart: " << c1 << " and " << d1 << std::endl ;
    my_swap<std::string> (c1, d1) ;
    std::cout << "Swap: " << c1 << " and " << d1 << std::endl ;

    std::cout << std::endl;
    // min
    std::cout << a << " vs " << b << std::endl;
    std::cout << "min: " << my_min<int>(a, b) << std::endl;

    std::cout << std::endl;
    // min
    std::cout << c1 << " vs " << d1 << std::endl;
    std::cout << "min: " << my_min<std::string>(c1, d1) << std::endl;

    std::cout << std::endl;
    // max
    std::cout << a << " vs " << b << std::endl;
    std::cout << "max: " << my_max<int>(a, b) << std::endl;

    std::cout << std::endl;
    // max
    std::cout << c1 << " vs " << d1 << std::endl;
    std::cout << "max: " << my_max<std::string>(c1, d1) << std::endl;
}