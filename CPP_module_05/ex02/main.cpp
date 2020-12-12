/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:12:07 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:19:48 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat tommy("Tommy", 1);
    try
    {
        // PresidentialPardonForm three("Dashbo");
        // three.be_signed(tommy);
        // three.execute(tommy);
    
        // ShrubberyCreationForm angel("Luic");
        // angel.be_signed(tommy);
        // angel.execute(tommy);

        // RobotomyRequestForm robot("Robot protocol");
        // robot.be_signed(tommy);
        // robot.execute(tommy);

        // tommy.executeForm(robot);
    } 
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}