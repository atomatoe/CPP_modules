/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 21:29:47 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/10 22:06:32 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

bool flag_f = false;
bool flag_point = false;
bool flag_plus = false;
bool flag_minus = false;

void nothing()
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void nan(std::string str)
{
    std::cout << "char: " << "Non displayable" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if(str != "nanf" && str != "inff")
        std::cout << "float: " << str << "f" << std::endl;
    else
    std::cout << "float: " << str << std::endl;
    std::cout << "double: " << str << std::endl;
}

int check_str(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if(str[i] == 'f' && flag_f == false)
            flag_f = true;
        else if(str[i] == '.' && flag_point == false)
            flag_point = true;
        else if(str[i] == '+' && flag_plus == false)
            flag_plus = true;
        else if(str[i] == '-' && flag_minus == false)
            flag_minus = true;
        else if(!isdigit(str[i]))
            return(1);
    }
    return(0);
}

int main(int argc, char **argv)
{
    char cymbol;
    float flot;
    double dobl;
    int integer;

    if(argc != 2)
    {
        std::cout << "Error number argument" << std::endl;
        return(-1);
    }
    std::string str = argv[1];
    if(str == "nanf" || str == "nan" || str == "+inf" || str == "-inf" || str == "inf" || str == "inff")
    {
        nan(str);
        return(0);
    }
    else if (str.length() == 1)
    {
        cymbol = static_cast<char>(str[0]);
        flot = static_cast<float>(str[0]);
        dobl = static_cast<double>(str[0]);
        integer = static_cast<int>(str[0]);
        if(cymbol != '0')
        {
            if(integer <= 32 || integer == 127)
                    std::cout << "char: " << "Non displayable" << std::endl;
            else if(integer > 127 || integer < 0)
                std::cout << "char: " << "impossible" << std::endl;
            else
                std::cout << "char: " << cymbol << std::endl;
            std::cout << "int: " << integer << std::endl;
            std::cout << "float: " << flot << ".0f" << std::endl;
            std::cout << "double: " << dobl << ".0" << std::endl;
            return(0);
        }
        else if(cymbol == '0')
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: 0" << std::endl;
            std::cout << "float: 0.0f" << std::endl;
            std::cout << "double: 0.0" << std::endl;
        }
    }
    else if (str.find("f") != std::string::npos /* && str.find(".") != std::string::npos */)
    {
        try {
            if(check_str(str) == 0)
            {
                float f = std::stof(str);
                cymbol = static_cast<char>(f);
                dobl = static_cast<double>(f);
                integer = static_cast<int>(f);
                flot = static_cast<float>(f);
                if(integer <= 32 || integer == 127)
                    std::cout << "char: " << "Non displayable" << std::endl;
                else if(integer > 127 || integer < 0)
                    std::cout << "char: " << "impossible" << std::endl;
                else
                    std::cout << "char: " << cymbol << std::endl;
                std::cout << "int: " << integer << std::endl;
                std::cout << "float: " << std::fixed << std::setprecision(1) << flot << "f" << std::endl;
                std::cout << "double: " << std::fixed << std::setprecision(1) << dobl << std::endl;
                return(0);
            }
            else
            {
                nothing();
                return(0);
            }
        } 
        catch (std::exception& e)
        {
            nothing();
        }
    } 
    else if (str.find(".") != std::string::npos)
    {
        try
        {
            if(check_str(str) == 0 && str[str.length() - 1] != '.')
            {   
                double j = std::stod(str);
                cymbol = static_cast<char>(j);
                flot = static_cast<float>(j);
                integer = static_cast<int>(j);
                dobl = static_cast<double>(j);
                if(integer <= 32 || integer == 127)
                    std::cout << "char: " << "Non displayable" << std::endl;
                else if(integer > 127 || integer < 0)
                    std::cout << "char: " << "impossible" << std::endl;
                else
                    std::cout << "char: " << cymbol << std::endl;
                std::cout << "int: " << integer << std::endl;
                if(flot > std::numeric_limits<float>::max())
                    std::cout << "float: +" << flot << "f" << std::endl;
                else
                    std::cout << "float: " << std::fixed << std::setprecision(1) << flot << "f" << std::endl;
                std::cout << "double: " << std::fixed << std::setprecision(1) << dobl << std::endl;
                return(0);
            }
            else
            {
                nothing();
                return(0);
            }
        }
        catch (std::exception& e)
        {
            nothing();
        }
    }
    else if (isdigit(str[0]) || str[0] == '-' || str[0] == '+')
    {
        try
        {
            if(check_str(str) == 0)
            {
                int i = std::stoi(str);
                cymbol = static_cast<char>(i);
                flot = static_cast<float>(i);
                dobl = static_cast<double>(i);
                if(i <= 32 || i == 127)
                    std::cout << "char: " << "Non displayable" << std::endl;
                else if(i > 127 || i < 0)
                    std::cout << "char: " << "impossible" << std::endl;
                else
                    std::cout << "char: " << cymbol << std::endl;
                std::cout << "int: " << i << std::endl;
                std::cout << "float: " <<  std::fixed << std::setprecision(1) << flot << "f" << std::endl;
                std::cout << "double: " << dobl << std::endl;
                return(0);
            }
            else
            {
                nothing();
                return(0);
            }
        }
        catch (std::exception& e)
        {
            nothing();
        }
    } 
    else 
        nothing();
    return(0);
}