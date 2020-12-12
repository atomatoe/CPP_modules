/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:12:09 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:30 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_name = name;
    this->_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat scores too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat scores too low!";
}

void Bureaucrat::grade_up(void)
{
    if(this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::grade_down(void)
{
    if(this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &type)
{
    out << type.get_name() << ", bureaucrat grade " << type.get_grade() << std::endl;
    return (out);
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &name)
{
    this->_name = name._name;
    this->_grade = name._grade;
    return(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &type)
{
    *this = type;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat deleted!" << std::endl;
}

void Bureaucrat::set_name(std::string value)
{
    this->_name = value;
}

std::string Bureaucrat::get_name(void) const
{
    return(_name);
}

void Bureaucrat::set_grade(unsigned int value)
{
    this->_grade = value;
}

unsigned int Bureaucrat::get_grade(void) const
{
    return(_grade);
}

void Bureaucrat::signForm(std::string name) const
{
    std::cout << this->_name << "  signs " << name << std::endl;
}