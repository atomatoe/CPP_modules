/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:13:59 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/12 14:29:40 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>

template<class T>
class Iterator;

template <class T>
class MutantStack
{
private:
	unsigned int	count;
    T				*pull;
	T				top2;
public:
	typedef Iterator<T> iterator;
    MutantStack()
	{
		count = 0;
		top2 = 0;
		pull = NULL;
		// std::cout << "Standart constructor called!" << std::endl;
	}
    ~MutantStack()
	{
		// std::cout << "Destructor called!" << std::endl;
		if(pull != NULL)
		{
			delete [] pull;
		}
	}

    MutantStack(const MutantStack &name)
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
			top2 = name.top2;
		}
		else
		{
			pull = NULL;
			count = 0;
			top2 = 0;
		}
	}

    MutantStack & operator=(const MutantStack &name)
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
			top2 = name.top2;
		}
		else
		{
			pull = NULL;
			count = 0;
			top2 = 0;
		}
    	return(*this);
	}

	T & operator[] (const unsigned int index) // для неконстантных объектов: может использоваться как для присваивания значений элементам, так и для их просмотра
	{
		if(index >= count)
			throw MutantStack::error();
		return pull[index];
	}

	void push(T name)
	{
		if(!name)
			return ;
		else
		{
			if(count == 0)
			{
				pull = new T[1];
				pull[0] = name;
				count++;
			}
			else
			{
				count += 1;
				T* newPull = pull;
				pull = new T[count];
				for (unsigned int i = 0; i < count - 1; ++i)
				{
					pull[i] = newPull[i];
				}
				delete [] newPull;
				pull[count - 1] = name;
			}
		}
	}

	T top()
	{
		return(pull[count - 1]);
	}

	void pop()
	{
		if(pull == NULL)
			return ;
		else
		{
			T* newPull = pull;
			pull = new T[count - 1];
			for(unsigned int i = 0; i < count - 1; i++)
			{
				pull[i] = newPull[i];
			}
			top2 = newPull[count - 1];
			delete [] newPull;
			count--;
		}
	}

	unsigned int size()
	{
		return(count);
	}

	bool empty()
	{
		bool status = false;
		if(count > 0)
		{
			status = true;
			return(status);
		}
		else
			return(status);
	}

    class error: public std::exception
    {
    public:
        virtual const char* what() const throw()
		{
			return ("Unkown index !!!");
		}
    };


	MutantStack::iterator begin()
	{
    	return iterator(pull);
	}

	MutantStack::iterator end()
	{
		return iterator(pull + count);
	}
};

template <class T>
class Iterator
{
private:
   	T* current;
public:
   	Iterator(T* curr)
   	{
	   	current = curr;
   	}
   	Iterator& operator =(const Iterator& other)
   	{
       if (this != &other)
       {
           current = other.current;
       }
       return *this;
   	}
   	Iterator& operator ++()
   	{
       	++current;
       	return *this;
  	}
	Iterator& operator --()
  	{
  	    --current;
       	return *this;
   	}
	Iterator operator --(int)
  	{
  	    Iterator name = this->current;
		--current;
       	return (name);
   	}
	Iterator operator ++(int)
  	{
  	    Iterator name = this->current;
		++current;
       	return (name);
   	}
   	T& operator *()
   	{
      	return *current;
   	}
   	bool operator ==(const Iterator& other)
   	{
      	return current == other.current;
   	}
   	bool operator !=(const Iterator& other)
   	{
      	return !(*this == other);
   	}
};

#endif