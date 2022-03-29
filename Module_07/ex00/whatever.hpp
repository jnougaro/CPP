/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:26:28 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/14 15:27:47 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T& x, T& y)
{
	T	temp = x;

	x = y;
	y = temp; 
}

template< typename T >
const T	min(const T& x, const T& y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template< typename T >
const T	max(const T& x, const T& y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif
