/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:28:29 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 22:17:08 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template < typename T >
void my_swap ( T & first , T & second )  // swap
{
    T temp = first;
    first = second;
    second = temp;
}

template < typename T >
T my_min ( T & first , T & second )  // swap
{
    if(first < second)
        return(first);
    else if(second < first)
        return(second);
    else
        return(second);
}

template < typename T >
T my_max ( T & first , T & second )  // swap
{
    if(first < second)
        return(second);
    else if(second < first)
        return(first);
    else
        return(second);
}

#endif