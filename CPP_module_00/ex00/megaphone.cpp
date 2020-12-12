/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:42:00 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/03 17:56:54 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		a = a - 32;
	return (a);
}

int main(int argc, char **argv) 
{ 
    int g;

    (void)argc;
    for(int i = 1; argv[i]; i++)
    {
        g = 0;
        while(argv[i][g])
            std::cout << (char)ft_toupper(argv[i][g++]);
    }
    if(!argv[1])
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0); 
}