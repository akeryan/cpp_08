/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 08:04:22 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 13:08:08 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <array>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	std::array<int, 5> a = {6, 9, 8, 9, 9};

	std::cout << "vector: " << easyfind(v, 3) << std::endl;
	std::cout << "array: " << easyfind(a, 9) << std::endl;
	try {
		easyfind(a, 33);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}