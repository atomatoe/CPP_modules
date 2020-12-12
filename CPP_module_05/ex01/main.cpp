/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:12:07 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:18:48 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a("Sam", 1);
    Bureaucrat b("Joy", 149);
    try
    {
        Form form("Pasport", 120, 100);
        form.be_signed(a);
        form.be_signed(a); // второй раз пытается подписать

        Form form2("Declaration", 40, 30);
        form2.be_signed(b);
    } 
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}