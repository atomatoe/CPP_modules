/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 23:58:12 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 18:49:13 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
// #include "Form.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someIntern;
    Bureaucrat tommy("Tommy", 1);
    Bureaucrat bash("Bash", 149);

    Form* rrf;
    try
    {
        // Bureaucrat bash2("Bash", 155);
        // Bureaucrat bash3("Bash", 0);
        // rrf = someIntern.makeForm("Presidential1", "President form");

        rrf = someIntern.makeForm("Presidential", "President form");
        rrf->be_signed(tommy);
        rrf->execute(tommy);

        rrf = someIntern.makeForm("Robotomy", "Robotomy form");
        rrf->be_signed(tommy);
        rrf->execute(tommy);

        rrf = someIntern.makeForm("Shrubbery", "Shrubbery form");
        rrf->be_signed(tommy);
        rrf->execute(tommy);
    } 
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}