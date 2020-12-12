/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:36:18 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/12 14:20:26 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>

class error: public std::exception {
public:
    virtual const char* what() const throw()
    {
        return ("Error! Value is not found!");
    }
};

template <typename T>
typename T::iterator easyfind (T value, int n)
{
    typename T::iterator name;
    name = std::find(value.begin(), value.end(), n);
    if(name == value.end())
        throw error();
    return(name);
    // try
    // {
    //     for(int i = 0; value[i]; i++)
    //     {
    //         if(value[i] == n)
    //         {
    //             std::cout << "Value is found!" << std::endl;
    //             return(value);
    //         }
    //     }
    //     throw 1;
    // }
    // catch(int a)
    // {
    //     throw error();
    // }
}