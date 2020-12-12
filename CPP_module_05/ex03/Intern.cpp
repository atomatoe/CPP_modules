/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 23:51:51 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 18:44:20 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    // std::cout << "Standart Intern created!" << std::endl;
}

Intern::Intern(const Intern &type)
{
    *this = type;
}

Intern & Intern::operator=(const Intern &type)
{
    (void)type;
    return(*this);
}

Form* Intern::makePresident(std::string name)
{
   return (new PresidentialPardonForm(name));
}

Form* Intern::makeRobot(std::string name)
{
   return (new RobotomyRequestForm(name));
}

Form* Intern::makeShruberry(std::string name)
{
   return (new ShrubberyCreationForm(name));
}

Form* Intern::makeForm(std::string const &nameForm, std::string const &target)
{
    std::string forms[3];
    forms[0] = "Presidential";
    forms[1] = "Robotomy";
    forms[2] = "Shrubbery";

    typedef Form* (Intern::*FormA)(std::string);
    FormA a[3] =
    { 
        a[0] = &Intern::makePresident,
        a[1] = &Intern::makeRobot, 
        a[2] = &Intern::makeShruberry
    };
    for(int i = 0; i != 3; i++)
    {
        if(nameForm == forms[i])
            return (this->*a[i])(target);
    }
    throw Intern::UnkownForm();
    return(NULL);
}

const char* Intern::UnkownForm::what() const throw()
{
    return ("Unkown form!");
}

Intern::~Intern()
{
    // std::cout << "Intern deleted!" << std::endl;
}