/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:37:38 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/21 11:37:38 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    std::vector<int> vec;

    for (int i = 0; i < 10; i++)
        vec.push_back(i);

    try {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Value found: " << *it << std::endl;

        it = easyfind(vec, 42);
        std::cout << "Value found: " << *it << std::endl;
    }
    catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}