/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:13:37 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 22:22:51 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
{
    if(n != 0)
        pull = new unsigned int[n];
    else
        pull = NULL;
    max_pull = n;
    index = 0;
}

Span::~Span()
{
    if(pull != NULL)
	{
		delete [] pull;
	}
}

Span::Span(const Span &name)
{
	// std::cout << "Copy constructor called!" << std::endl;
	if(name.max_pull != 0)
	{
		pull = new unsigned int[name.max_pull];
		for(unsigned int i = 0; i < name.index; i++)
		{
			pull[i] = name.pull[i];
		}
	    index = name.index;
        max_pull = name.max_pull;
	}
	else
	{
		pull = NULL;
		index = 0;
        max_pull = 0;
	}
}

Span & Span::operator=(const Span &name)
{
	if(pull != NULL)
	{
		delete [] pull;
	}
	if(name.max_pull != 0)
	{
		pull = new unsigned int[name.max_pull];
		for(unsigned int i = 0; i < name.index; i++)
		{
			pull[i] = name.pull[i];
		}
		index = name.index;
        max_pull = name.max_pull;
	}
	else
	{
		pull = NULL;
		index = 0;
        max_pull = 0;
	}
    return(*this);
}

void Span::addNumber(unsigned int n)
{
    if(index < max_pull)
    {
        pull[index] = n;
        // std::cout << "Pull: " << pull[index] << std::endl;
        index++;
    }
    else
        throw error();
}

unsigned int Span::shortestSpan()
{
    int shortest = 0;
	int finaly = 0;

    if(index >= 2)
    {
        finaly = pull[0] - pull[1]; // 2
		if(finaly < 0)
			finaly = finaly * -1;
		for(unsigned int i = 0; i < index - 1; i++)
        {
			shortest = pull[i] - pull[i + 1]; // 14
			if(shortest < 0)
				shortest = shortest * -1;
			if(finaly > shortest)
				finaly = shortest;
        }
    }
    else
        std::cout << "Необходимо два и более аргумета!" << std::endl;
    return(finaly);
}

unsigned int Span::longestSpan()
{
	int shortest = 0;
	int finaly = 0;

    if(index >= 2)
    {
        finaly = pull[0] - pull[1]; // 2
		if(finaly < 0)
			finaly = finaly * -1;
		for(unsigned int i = 0; i < index - 1; i++)
        {
			shortest = pull[i] - pull[i + 1]; // 14
			if(shortest < 0)
				shortest = shortest * -1;
			if(finaly < shortest)
				finaly = shortest;
        }
    }
    else
        std::cout << "Необходимо два и более аргумета!" << std::endl;
    return(finaly);
}