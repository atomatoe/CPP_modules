/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:51 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:05:26 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5) {}

void PresidentialPardonForm::execute(Bureaucrat const &type) const
{
    Form::execute(type);
    std::cout << type.get_name() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
    
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &type) : Form(type.get_name(), 25, 5)
{
    *this = type;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &name)
{
    this->_name = name._name;
    this->_status = name._status;
    this->_grade_to_sign = name._grade_to_sign;
    this->_grade_to_job = name._grade_to_job;
    return(*this);
}

std::ostream & operator<<(std::ostream &out, const PresidentialPardonForm &obj)
{
    if(obj.get_status() == 1)
        out << obj.get_name() << ", form is signed" << std::endl;
    else
        out << obj.get_name() << ", form is unsigned" << std::endl;
    return (out);
}

PresidentialPardonForm::~PresidentialPardonForm() {}