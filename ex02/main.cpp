/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 07:23:59 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/16 11:18:23 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "stack s: " << s.top() << std::endl;

	MutantStack<float> fstack;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		fstack.push(rand());
	}
	for (MutantStack<float>::iterator it = fstack.begin(); it != fstack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return 0;
}