/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:56:13 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/15 14:58:06 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NoOccurenceFoundException : public std::exception
{
	const char* what() const throw()
	{
		return ("No occurence found");
	}
};

template< typename T >
int	easyfind(T& array, int first_occurence)
{
	typename T::iterator it = std::find (array.begin(), array.end(), first_occurence);
	if (it == array.end())
		throw	NoOccurenceFoundException();
	return (*it);
}

#endif
