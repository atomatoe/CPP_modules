/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:59:53 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/03 00:22:32 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string resultAll(std::string str, const std::string& search, const std::string& replace)
{
    int pos = 0;
    while ((pos = str.find(search, pos)) != (int)std::string::npos) 
    {
        str.replace(pos, search.length(), replace);
        pos += search.length();
    }
    return (str);
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong counter argument!" << std::endl;
        return(-1);
    }
    std::string buf;
    std::string search = argv[2];
    std::string replaces = argv[3];

    std::ifstream text(argv[1]); // для чтения
    std::ofstream replace; // для записи

    if (!text.is_open())
    {
        std::cout << "File not open!" << std::endl;
        text.close();
        replace.close();
        return(-1);
    }
    replace.open(strcat(argv[1], ".replace")); // формирования файла для записи
    while (std::getline(text, buf, '\0'))
    {
        buf = resultAll(buf, search, replaces);
        replace << buf;
    }
    text.close();
    replace.close();
    return(0);
}
