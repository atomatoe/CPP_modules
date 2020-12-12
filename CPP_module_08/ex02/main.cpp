/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:13:58 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 22:23:15 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>

int main()
{
    try
    {
        MutantStack<int> mstack;
        mstack.push(17);
        mstack.push(5);
        std::cout << mstack.top() << std::endl;
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(25);
        std::cout << "Size my stack: " << mstack.size() << std::endl;


        // std::cout << std::endl << std::endl;
        // MutantStack<int>::iterator it = mstack.begin();
        // MutantStack<int>::iterator ite = mstack.end();
        // ++it;
        // --it;
        // while (it != ite)
        // {
        //     std::cout << *it << std::endl;
        //     ++it;
        // }


        MutantStack<int> s(mstack);
        s.push(13);
        s.push(25);
        std::cout << s.top() << std::endl;
        s.push(50);
        std::cout << "Size my stack: " << s.size() << std::endl;
    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }


    try
    {
        std::cout << std::endl << std::endl;
        std::stack<int> mstack1;
        mstack1.push(17);
        mstack1.push(5);
        std::cout << mstack1.top() << std::endl;
        mstack1.push(17);
        std::cout << mstack1.top() << std::endl;
        mstack1.pop();
        std::cout << mstack1.size() << std::endl;
        mstack1.push(3);
        mstack1.push(5);
        mstack1.push(737);
        mstack1.push(25);
        std::cout << "Size standart stack: " << mstack1.size() << std::endl;
        // std::stack<int>::iterator it = mstack1.begin();
        // std::stack<int>::iterator ite = mstack1.end();
        // ++it;
        // --it;
        // while (it != ite)
        // {
        //     std::cout << *it << std::endl;
        //     ++it;
        // }
        std::stack<int> s(mstack1);
        s.push(13);
        s.push(25);
        std::cout << s.top() << std::endl;
        s.push(50);
        std::cout << "Size standart stack: " << s.size() << std::endl;

    }
    catch(std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}