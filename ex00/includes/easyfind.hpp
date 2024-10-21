/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:37:05 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/21 11:37:05 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>

class _OccurenceNotFound : public std::exception
{
public:
    const char *what() const throw();
};

const char* _OccurenceNotFound::what() const throw()
{
    return "We found nothing, sorry!";
}

template <typename T>
typename T::iterator easyfind(T &container, int value) // Change the return type here
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    
    if (it == container.end())
        throw _OccurenceNotFound();
    
    return it; // Now returning the iterator correctly
}
