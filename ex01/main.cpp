/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:20:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/16 10:40:34 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span *fillVector(unsigned int size)
{
	Span *v = new Span(size);
	std::srand(time(NULL));	
	while (size-- > 0) {
		v->addNumber(rand());
	}
	return v;	
}

int main(void)
{
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(11);
		//sp.getNumber(10);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span *sp2 = fillVector(1000);
		std::cout << std::endl;
		std::cout << sp2->shortestSpan() << std::endl;
		std::cout << sp2->longestSpan() << std::endl;

		delete sp2;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}