/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 08:04:16 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/16 10:28:36 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
int easyFind(T cont, int target)
{
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), target);
	if (it != cont.end())
		return std::distance(cont.begin(), it);
	throw(std::out_of_range("Element not found"));
}

#endif