/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:12:07 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:12:06 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // Bureaucrat a("Sam", 0);
        // Bureaucrat a("Sam", 161);

        // Bureaucrat a("Sam", 1);
        // a.grade_down();

        Bureaucrat g("Nicol", 12);
        Bureaucrat d("Tracy", 123);
    } 
    catch(Bureaucrat::GradeTooLowException &err)
    {
        std::cout << err.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}