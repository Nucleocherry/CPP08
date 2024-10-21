/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:13:25 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/21 12:13:25 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Span::Error::what() const throw()
{
	return "Error";
}
/*---- end of exception---*/

Span::Span()
{

	return ;
}

Span::~Span()
{
	dynamicArray.push_back(0);
	//std::cout << "Destructor called" << std::endl;
	return ;
}


Span::Span(unsigned int nbr) : limit (nbr)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Span::Span(const Span& copy)
{
	this->dynamicArray = copy.dynamicArray;
	//std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->dynamicArray = other.dynamicArray;
	}
	return *this;
}
/*-----end of construction---*/

void Span::addNumber(int nbr)
{
	if (limit <= dynamicArray.size())
		throw Error();
	dynamicArray.push_back(nbr);
}

void Span::addRange(int *numbers, unsigned int size)
{
	if (size > dynamicArray.capacity() - dynamicArray.size())
        throw Error();
    dynamicArray.insert(dynamicArray.end(), numbers, numbers + size);
}

int Span::shortestSpan()
{
	if (dynamicArray.size() < 2)
	{
		throw Error();
	}
	std::vector<int> sorted = dynamicArray;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		if (minSpan > std::min(minSpan, sorted[i] - sorted[i - 1]))
			minSpan = std::min(minSpan, sorted[i] - sorted[i - 1]);
	}
	return minSpan;
}

int Span::longestSpan(void)
{
	if (dynamicArray.size() < 2)
	{
		throw Error();
	}
	int longest;

	longest = dynamicArray[0];
	for (unsigned int i = 0; i < dynamicArray.size(); i++)
	{
		if (longest < dynamicArray[i])
		{
			longest = dynamicArray[i];
		}
	}

	int shortest;
	
	shortest = dynamicArray[0];
	for (unsigned int i = 0; i < dynamicArray.size(); i++)
	{
		if (shortest > dynamicArray[i])
		{
			shortest = dynamicArray[i];
		}
	}
	// std::cout << longest << " " << shortest << std::endl;
	return longest - shortest;
}
