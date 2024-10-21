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

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

// int main() {
//     try {
//         Span sp = Span(5); // Crée un Span avec une capacité de 5 éléments
        
//         // Ajout d'éléments un par un
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);

//         std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
//         std::cout << "Longest span: " << sp.longestSpan() << std::endl;

//         // Essayons maintenant d'ajouter une plage d'éléments avec addRange
//         int arr[] = {1, 2, 3, 4, 5}; // Tableau d'éléments à ajouter
//         Span sp2 = Span(10); // Crée un Span avec une capacité de 10 éléments
        
//         sp2.addRange(arr, 5); // Ajoute les 5 éléments du tableau
//         sp2.addNumber(10);
//         sp2.addNumber(20);

//         std::cout << "sp2 Shortest span: " << sp2.shortestSpan() << std::endl;
//         std::cout << "sp2 Longest span: " << sp2.longestSpan() << std::endl;

//     } catch (std::exception &e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }


