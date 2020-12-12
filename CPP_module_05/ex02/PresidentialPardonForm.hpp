/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:47 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:04:56 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONROFM_HPP
# define PRESIDENTIALPARDONROFM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string name);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &type);
    PresidentialPardonForm & operator=(const PresidentialPardonForm &name);

    std::string const& getTarget() const;
    void execute(Bureaucrat const&) const;
};

std::ostream & operator<<(std::ostream &out, const PresidentialPardonForm &obj);

#endif