/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 23:51:50 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:03:26 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(const Intern &type);
    Intern & operator=(const Intern &name);

    Form* makeRobot(std::string name);
    Form* makeShruberry(std::string name);
    Form* makePresident(std::string name);
    Form* makeForm(std::string const &nameForm, std::string const &target);

    class UnkownForm: public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

#endif