/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:03:56 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/10 22:11:47 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>
#include <time.h>
#include <cstdlib>

Base* generate(void)
{
    int random = rand() % 3; // 0, 1, 2
    if(random == 0)
        return(new A);
    else if(random == 1)
        return(new B);
    else if(random == 2)
        return(new C);
    return(NULL);
}

void identify_from_reference (Base &p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch(std::bad_cast &err)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
            return ;
        }
        catch(std::bad_cast &err)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
                return ;
            }
            catch(std::bad_cast &err)
            {
                throw Base::error();
            }
        }
    }
}

void identify_from_pointer (Base *p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    if(a != 0)
        std::cout << "A" << std::endl;
    else if(b != 0)
        std::cout << "B" << std::endl;
    else if(c != 0)
        std::cout << "C" << std::endl;
}

int main()
{
    try
    {
        srand(time(NULL));
        // Base* a = generate();
        // Base* b = generate();
        // identify_from_pointer(generate());
        identify_from_reference(*generate());

        // identify_from_pointer(a);
        // identify_from_reference(*b);
    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return(0);
}