/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:20:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 18:40:26 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	try {
		Span a(2);
		a.addNumber(2);
		a.addNumber(3);
		std::cout << a.getNumber(1) << std::endl;

		Span b(1);
		b.addNumber(99);
		b = a;
		std::cout << "Span b: " << b.getNumber(0) << std::endl;
		
		Span c(a);
		std::cout << "C: " << c.getNumber(1) << std::endl;

		Span d(4);
		d.addNumber(INT_MIN);
		d.addNumber(INT_MAX);
		d.addNumber(0);
		d.addNumber(2);
		std::cout << "minSpan: " << d.shortestSpan() << std::endl;
		Span e(1);
		e.addNumber(9);
		std::cout << "maxSpan: " << e.longestSpan() << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}