/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:40:21 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/28 14:57:14 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int nb_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_number = nb_int << this->_nb_bits_fractionnal;
	return ;
}

Fixed::Fixed(const float nb_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_number = roundf(nb_float * (1 << this->_nb_bits_fractionnal));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;	
	this->_fixed_point_number = fixed.getRawBits();	
	return (*this);
}

std::ostream&	operator<<(std::ostream&os, const Fixed& fixed_number)
{
	return (os << fixed_number.toFloat());
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_number = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point_number / (float)(1 << this->_nb_bits_fractionnal));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_point_number >> this->_nb_bits_fractionnal);
}
