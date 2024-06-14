/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:21:17 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 18:05:21 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <climits>

class Span 
{
	public:
		Span();
		~Span();
		Span(const unsigned int size);
		Span(const Span &other);
		const Span &operator=(const Span &other);
		void addNumber(const int num);
		int getNumber(const unsigned int index) const;
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
	private:
		unsigned int _size;
		std::vector<int> _bucket; 
};

#endif