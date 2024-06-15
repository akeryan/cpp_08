/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:15:47 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/15 19:49:44 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> 
{
	public:
		MutantStack() { };
		~MutantStack () { };
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }
};

#endif