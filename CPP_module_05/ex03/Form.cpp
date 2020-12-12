/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:56:24 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 23:30:17 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_job)
{
    if(grade_to_sign < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150)
        throw Form::GradeTooLowException();
    if(grade_to_job < 1)
        throw Form::GradeTooHighException();
    if (grade_to_job > 150)
        throw Form::GradeTooLowException();
    this->_name = name;
    this->_status = 0;
    this->_grade_to_sign = grade_to_sign;
    this->_grade_to_job = grade_to_job;
}

void Form::be_signed(Bureaucrat &name)
{
    if(name.get_grade() > this->_grade_to_sign)
        throw Form::GradeTooLowException();
    if(this->_status == 1)
        std::cout << "The form is already signed! Bureaucrat can't sign" << std::endl;
    else
    {
        this->_status = 1;
        name.signForm(this->_name);
    }
}

Form::~Form()
{
    // std::cout << "Form deleted!" << std::endl;
}

Form::Form(const Form &type)
{
    *this = type;
}

Form & Form::operator=(const Form &name)
{
    this->_name = name._name;
    this->_status = name._status;
    this->_grade_to_sign = name._grade_to_sign;
    this->_grade_to_job = name._grade_to_job;
    return(*this);
}

std::ostream & operator<<(std::ostream &out, const Form &obj)
{
    if(obj.get_status() == 1)
        out << obj.get_name() << ", form is signed" << std::endl;
    else
        out << obj.get_name() << ", form is unsigned" << std::endl;
    return (out);
}

std::string Form::get_name(void) const
{
    return(this->_name);
}

unsigned int Form::get_status(void) const
{
    return(this->_status);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat scores too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat scores too low!");
}

void Form::execute(const Bureaucrat &bur) const
{
    if(bur.get_grade() > this->_grade_to_job)
        throw Form::GradeTooLowException();
}