/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:26:01 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/15 16:26:01 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <climits>
# include <list>
# include <vector>

class Span
{
	public:

		Span(void);
		Span(unsigned int N);
		Span(const Span& copy);
		~Span(void);

		Span& operator=(const Span& rhs);

		void			addNumber(int number);
		void			addNumbers(std::vector< int >::iterator begin, std::vector< int >::iterator end);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class SpanFullException : public std::exception
		{
			const char* what() const throw();
		};

		class DistanceNotFoundException : public std::exception
		{
			const char* what() const throw();
		};

	private:

		unsigned int	_N;
		std::vector< int > _array;

};

#endif
