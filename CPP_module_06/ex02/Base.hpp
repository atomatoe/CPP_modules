/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:57:28 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/10 19:00:21 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
// #include <string>
// #include <cstdlib>
// #include <cmath>
// #include <time.h>

class Base
{
public:
    Base() {}
    virtual ~Base() {}

    class error: public std::exception {
    public:
        virtual const char* what() const throw()
        {
            return ("Error!");
        }
    };
};

#endif