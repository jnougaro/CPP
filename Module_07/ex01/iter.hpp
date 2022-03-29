/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:46:15 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/14 15:39:32 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstddef>

template< typename T >
void	iter(T* tab, const size_t size, void (*f)(T const &value))
{
	if (tab == NULL)
		return ;
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template< typename T >
void	display(T const &value)
{
	std::cout << "[" << value << "] ";
}

#endif
