/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:13:03 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/21 12:13:03 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>

class Span
{
	private:

		std::vector<int> dynamicArray;
		unsigned int limit;

	public:

		Span(/* args */);
		~Span();

		Span(const Span& copy);
		Span &operator=(const Span &other);

		Span(unsigned int nbr);
		/*---end of construction--*/
		class Error : public std::exception
		{
			public:
				const char * what() const throw();
		};

		/*----end of excepetion---*/

		void addNumber(int nbr);
		void addRange(int *numbers, unsigned int size);
		int shortestSpan(void);
		int longestSpan(void);
};
