/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:40:22 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/05 12:04:37 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
      
class Fixed
{
private:
       int                  _value;
    static  const int       _valueAfterPointer = 8;
public:
    Fixed(); // стандартный конструктор
    Fixed(const Fixed &obj); // конструктор копирования
    Fixed&  operator= (const Fixed& obj) {
        this->_value = obj._value;
        return (*this);
    }
    int     getRawBits(void) const;
    ~Fixed(); // деструктор
};

#endif