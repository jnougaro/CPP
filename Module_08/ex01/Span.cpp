/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:25:50 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/15 16:25:54 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/********** CONSTRUCTORS AND DESTRUCTOR **********/

Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

/********** OPERATOR **********/

Span&	Span::operator=(const Span& rhs)
{
	if (this == &rhs)
		return (*this);
	this->_N = rhs._N;
	this->_array = rhs._array;
	return (*this);
}

/********** EXCEPTIONS **********/

const char* Span::SpanFullException::what() const throw()
{
	return ("Span is already full!");
}

const char* Span::DistanceNotFoundException::what() const throw()
{
	return ("No distance can be found");
}

/********** OTHER FUNCTIONS **********/

void	Span::addNumber(int number)
{
	if (this->_array.size() == this->_N)
		throw	Span::SpanFullException();
	else
		this->_array.push_back(number);
}

void	Span::addNumbers(std::vector< int >::iterator begin, std::vector< int > ::iterator end)
{
	if (this->_array.size() + std::distance(begin, end) > this->_N)
		throw Span::SpanFullException();
	this->_array.insert(this->_array.end(), begin, end);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_array.size() <= 1)
		throw Span::DistanceNotFoundException();

	unsigned int shortest_dist = UINT_MAX;
	std::vector< int >::iterator it1;
	std::vector< int >::iterator it2;
	for (it1 = this->_array.begin(); it1 != this->_array.end(); it1++)
	{
		for (it2 = it1 + 1; it2 != this->_array.end(); it2++)
		{
			unsigned int current_dist = std::abs(*it1 - *it2);
			if (current_dist < shortest_dist)
				shortest_dist = current_dist;
		}
	}
	return (shortest_dist);
}

unsigned int	Span::longestSpan()
{
	if (this->_array.size() <= 1)
		throw Span::DistanceNotFoundException();

	std::vector< int >::iterator max;
	std::vector< int >::iterator min;

	max = std::max_element(this->_array.begin(), this->_array.end());
	min = std::min_element(this->_array.begin(), this->_array.end());

	return (*max - *min);
}