/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:12:50 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/05 13:16:55 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
      
class Fixed
{
private:
    int                     _value;
    static  const int       _valueAfterPointer = 8;
public:
    Fixed(); // стандартный конструктор
    Fixed(const Fixed &obj); // конструктор копирования
    Fixed(const int params);
    Fixed(const float params);
    Fixed&  operator= (const Fixed& obj) {
        this->_value = obj._value;
        return (*this);
    }
    float   toFloat(void) const;
    int     toInt(void) const;
    ~Fixed(); // деструктор
};

std::ostream&   operator<<(std::ostream& out, const Fixed &obj);

#endif