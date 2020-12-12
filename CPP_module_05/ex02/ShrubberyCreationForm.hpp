/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:59 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:04:42 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string name);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &type);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &name);

    std::string const& getTarget() const;
    void execute(Bureaucrat const &name) const;
};

std::ostream & operator<<(std::ostream &out, const ShrubberyCreationForm &obj);

#endif