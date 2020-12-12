/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:13:38 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 14:46:24 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
private:
    Span();
    unsigned int max_pull;
    unsigned int index;
    unsigned int *pull;
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span &type);
    Span & operator=(const Span &name);

    void addNumber(unsigned int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class error: public std::exception {
    public:
        virtual const char* what() const throw()
        {
            return ("Error ! Pull is full !");
        }
    };

    class error2: public std::exception {
    public:
        virtual const char* what() const throw()
        {
            return ("Error ! Pull is full !");
        }
    };
};

#endif