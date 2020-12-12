/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:47:59 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 00:34:49 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void text(T value)
{
	std::cout << value << std::endl;
}

template <typename type>
void iter (type *value , int len, void (*func)(type const & arg))
{
    for(int i = 0; i < len; i++)
    {
        (*func)(value[i]);
    }
}

#endif