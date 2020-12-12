/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 01:03:37 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/11 13:12:42 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
private:
	unsigned int	count;
    T				*pull;
public:
    Array()
	{
		count = 0;
		pull = NULL;
		// std::cout << "Standart constructor called!" << std::endl;
	}

    Array(unsigned int n)
	{
		count = n;
		pull = new T[n];
		// std::cout << "Constructor (unsigned int) called!" << std::endl;
	}

    ~Array()
	{
		// std::cout << "Destructor called!" << std::endl;
		if(pull != NULL)
		{
			delete [] pull;
		}
	}

    Array(const Array &name)
	{
		// std::cout << "Copy constructor called!" << std::endl;
		if(name.count != 0)
		{
			pull = new T[name.count];
			for(unsigned int i = 0; i < name.count; i++)
			{
				pull[i] = name.pull[i];
			}
			count = name.count;
		}
		else
		{
			pull = NULL;
			count = 0;
		}
	}

    Array & operator=(const Array &name)
	{
		if(pull != NULL)
		{
			delete [] pull;
		}
		if(name.count != 0)
		{
			pull = new T[name.count];
			for(unsigned int i = 0; i < name.count; i++)
			{
				pull[i] = name.pull[i];
			}
			count = name.count;
		}
		else
		{
			pull = NULL;
			count = 0;
		}
    	return(*this);
	}

	T & operator[] (const unsigned int index) // для неконстантных объектов: может использоваться как для присваивания значений элементам, так и для их просмотра
	{
		if(index >= count)
			throw Array::error();
		return pull[index];
	}

    class error: public std::exception
    {
    public:
        virtual const char* what() const throw()
		{
			return ("Unkown index !!!");
		}
    };

};