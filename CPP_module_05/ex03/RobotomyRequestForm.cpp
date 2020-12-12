/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:53 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:04:20 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <cmath>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45) {}
    
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &type) : Form(type.get_name(), 72, 45)
{
    *this = type;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &name)
{
    this->_name = name._name;
    this->_status = name._status;
    this->_grade_to_sign = name._grade_to_sign;
    this->_grade_to_job = name._grade_to_job;
    return(*this);
}

std::ostream & operator<<(std::ostream &out, const RobotomyRequestForm &obj)
{
    if(obj.get_status() == 1)
        out << obj.get_name() << ", form is signed" << std::endl;
    else
        out << obj.get_name() << ", form is unsigned" << std::endl;
    return (out);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &type) const
{
    Form::execute(type);
    srand(time(NULL));
    if((rand() % 2) == 1)
    {
        std::cout << "BZZZ... BRRR... BZHZ......" << std::endl;
        std::cout << type.get_name() << " has been robotomized successfully 50% of the time!" << std::endl;
    }
    else
        std::cout << "Drilling system failure!" << std::endl;
}