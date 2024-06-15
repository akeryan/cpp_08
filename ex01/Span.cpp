/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:21:26 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 19:35:10 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0) { }

Span::Span(const unsigned int size): _size(size) { }

Span::~Span() { }

Span::Span(const Span &other)
{
	if (this != &other) {
		*this = other;
	}
}

const Span &Span::operator=(const Span &other)
{
	if (this != &other) {
		_size = other._size;
		_bucket = other._bucket;
	}
	return *this;
}

void Span::print(void) const
{
	for (unsigned int i = 0; i < _bucket.size(); i++) {
		std::cout << _bucket[i] << " ";
	}
}

void Span::addNumber(const int num)
{
	if (_bucket.size() < _size) {
		_bucket.push_back(num);
	} else 
		throw (std::out_of_range("<Exception>: Span is out of capacity"));
}

int Span::getNumber(const unsigned int index) const
{
	if (index < _size) {
		return _bucket[index];
	}
	throw (std::out_of_range("<Exception>: index is out of range"));
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_bucket.size() <= 1) {
		throw (std::logic_error("<exception>: impossible to compute shortest span"));
	}
	unsigned int minSpan = static_cast<unsigned int>(INT_MAX) - static_cast<unsigned int>(INT_MIN);
	std::vector<int> tmpVec = _bucket;
	std::sort(tmpVec.begin(), tmpVec.end());
	for (unsigned int i = 0; i < tmpVec.size() - 1; i++) {
		unsigned int sp = static_cast<unsigned int>(tmpVec[i + 1]) - static_cast<unsigned int>(tmpVec[i]);
		if (sp < minSpan)
			minSpan = sp;
	}
	return minSpan;
}

unsigned int Span::longestSpan(void) const
{
	if (this->_bucket.size() <= 1) {
		throw (std::logic_error("<exception>: impossible to compute longest span"));
	}
	std::vector<int> tmpVec = _bucket;
	std::sort(tmpVec.begin(), tmpVec.end());

	return static_cast<unsigned int>(tmpVec.back() - static_cast<unsigned int>(tmpVec.front()));
}