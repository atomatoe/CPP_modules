/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:12:39 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/05 12:03:11 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float     Fixed::toFloat(void) const {
    return ((float)this->_value / (1 << this->_valueAfterPointer));
}

int     Fixed::toInt(void) const {
    return (this->_value / (1 << this->_valueAfterPointer));
}

Fixed::Fixed(const float params) {
    this->_value = (int)(std::roundf(params * (1 << this->_valueAfterPointer)));
}

Fixed::Fixed(const int params) {
    this->_value = params << this->_valueAfterPointer;
}

std::ostream&   operator<<(std::ostream& out, const Fixed &obj) {
    out << obj.toFloat();
    return (out);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{      
    std::cout << "Copy constructor called" << std::endl;
    _value = obj._value;
}