/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:19:57 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/09 00:04:49 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137) {}
    
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &type) : Form(type.get_name(), 145, 137)
{
    *this = type;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &name)
{
    this->_name = name._name;
    this->_status = name._status;
    this->_grade_to_sign = name._grade_to_sign;
    this->_grade_to_job = name._grade_to_job;
    return(*this);
}

std::ostream & operator<<(std::ostream &out, const ShrubberyCreationForm &obj)
{
    if(obj.get_status() == 1)
        out << obj.get_name() << ", form is signed" << std::endl;
    else
        out << obj.get_name() << ", form is unsigned" << std::endl;
    return (out);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &type) const
{
    Form::execute(type);
        std::ofstream replace;
        replace.open(type.get_name() + "_shrubbery");
        replace << "      /\\      " << std::endl;
        replace << "     /\\*\\     " << std::endl;
        replace << "    /\\O\\*\\    " << std::endl;
        replace << "   /*/\\/\\/\\   " << std::endl;
        replace << "  /\\O\\/\\*\\/\\  " << std::endl;
        replace << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        replace << "/\\O\\/\\/*/\\/O/\\" << std::endl;
        replace << "      ||      " << std::endl;
        replace << "      ||      " << std::endl;
        replace << "      ||      " << std::endl;
        replace << std::endl << std::endl;
        replace << "         v         " << std::endl;
        replace << "        >X<        " << std::endl;
        replace << "         A         " << std::endl;
        replace << "        d$b        " << std::endl;
        replace << "      .d\\$$b.      " << std::endl;
        replace << "    .d$i$$\\$$b.    " << std::endl;
        replace << "       d$$@b       " << std::endl;
        replace << "      d\\$$$ib      " << std::endl;
        replace << "    .d$$$\\$$$b     " << std::endl;
        replace << "  .d$$@$$$$\\$$ib.  " << std::endl;
        replace << "      d$$i$$b      " << std::endl;
        replace << "     d\\$$$$@$b     " << std::endl;
        replace << "  .d$@$$\\$$$$$@b.  " << std::endl;
        replace << ".d$$$$i$$$\\$$$$$$b." << std::endl;
        replace << "        ###        " << std::endl;
        replace << "        ###        " << std::endl;
        replace << "        ###        " << std::endl;
        replace << std::endl << std::endl;
        replace << "         *          " << std::endl;
        replace << "        /|\\         " << std::endl;        
        replace << "       /*|O\\        " << std::endl;
        replace << "      /*/|\\*\\       " << std::endl;
        replace << "     /X/O|*\\X\\      " << std::endl;
        replace << "    /*/X/|\\X\\*\\     " << std::endl;
        replace << "   /O/*/X|*\\O\\X\\    " << std::endl;        
        replace << "  /*/O/X/|\\X\\O\\*\\   " << std::endl;
        replace << " /X/O/*/X|O\\X\\*\\O\\  " << std::endl;
        replace << "/O/X/*/O/|\\X\\*\\O\\X\\ " << std::endl;
        replace << "        |X|         " << std::endl;
        replace << "        |X|         " << std::endl;
        replace << std::endl << std::endl;
        replace << "      /\\      " << std::endl;
        replace << "     /\\*\\     " << std::endl;
        replace << "    /\\O\\*\\    " << std::endl;
        replace << "   /*/\\/\\/\\   " << std::endl;
        replace << "  /\\O\\/\\*\\/\\  " << std::endl;
        replace << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        replace << "/\\O\\/\\/*/\\/O/\\" << std::endl;
        replace << "      ||      " << std::endl;
        replace << "      ||      " << std::endl;
        replace << "      ||      " << std::endl;
        replace << std::endl << std::endl;
        replace << "         v         " << std::endl;
        replace << "        >X<        " << std::endl;
        replace << "         A         " << std::endl;
        replace << "        d$b        " << std::endl;
        replace << "      .d\\$$b.      " << std::endl;
        replace << "    .d$i$$\\$$b.    " << std::endl;
        replace << "       d$$@b       " << std::endl;
        replace << "      d\\$$$ib      " << std::endl;
        replace << "    .d$$$\\$$$b     " << std::endl;
        replace << "  .d$$@$$$$\\$$ib.  " << std::endl;
        replace << "      d$$i$$b      " << std::endl;
        replace << "     d\\$$$$@$b     " << std::endl;
        replace << "  .d$@$$\\$$$$$@b.  " << std::endl;
        replace << ".d$$$$i$$$\\$$$$$$b." << std::endl;
        replace << "        ###        " << std::endl;
        replace << "        ###        " << std::endl;
        replace << "        ###        " << std::endl;
        replace << std::endl << std::endl;
        replace << "         *          " << std::endl;
        replace << "        /|\\         " << std::endl;        
        replace << "       /*|O\\        " << std::endl;
        replace << "      /*/|\\*\\       " << std::endl;
        replace << "     /X/O|*\\X\\      " << std::endl;
        replace << "    /*/X/|\\X\\*\\     " << std::endl;
        replace << "   /O/*/X|*\\O\\X\\    " << std::endl;        
        replace << "  /*/O/X/|\\X\\O\\*\\   " << std::endl;
        replace << " /X/O/*/X|O\\X\\*\\O\\  " << std::endl;
        replace << "/O/X/*/O/|\\X\\*\\O\\X\\ " << std::endl;
        replace << "        |X|         " << std::endl;
        replace << "        |X|         " << std::endl;
}