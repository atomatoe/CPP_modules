/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:55 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:04:18 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string name);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &type);
    RobotomyRequestForm & operator=(const RobotomyRequestForm &name);

    std::string const& getTarget() const;
    void execute(Bureaucrat const &name) const;
};

std::ostream & operator<<(std::ostream &out, const RobotomyRequestForm &obj);

#endif