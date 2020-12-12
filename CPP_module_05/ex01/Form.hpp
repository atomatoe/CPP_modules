/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:56:22 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:16:26 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string _name;
    int _status;
    unsigned int _grade_to_sign;
    unsigned int _grade_to_job;
public:
    Form(std::string name, int grade_to_sign, int grade_to_job);
    ~Form();
    Form(const Form &type);
    Form & operator=(const Form &name);

    class GradeTooHighException: public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class Sign: public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    void be_signed(Bureaucrat &name);
    std::string get_name(void) const;
    unsigned int get_status(void) const;
};

std::ostream & operator<<(std::ostream &out, const Form &obj);

#endif