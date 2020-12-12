/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:12:08 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:44 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string _name;
    int _grade;
    Bureaucrat();
public:

    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &type);
    Bureaucrat & operator=(const Bureaucrat &name);

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

    void grade_up(void);
    void grade_down(void);
    //setters and getters
    void set_name(std::string value);
    std::string get_name(void) const;
    void set_grade(unsigned int value);
    unsigned int get_grade(void) const;
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj);

#endif