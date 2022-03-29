/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:40:21 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/28 17:28:54 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_number(0)
{
	return ;
}

Fixed::Fixed(const Fixed& copy) 
{
	*this = copy;
	return ;
}

Fixed::Fixed(const int nb_int)
{
	this->_fixed_point_number = nb_int << this->_nb_bits_fractionnal;
	return ;
}

Fixed::Fixed(const float nb_float)
{
	this->_fixed_point_number = roundf(nb_float * (1 << this->_nb_bits_fractionnal));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	this->_fixed_point_number = fixed.getRawBits();	
	return (*this);
}

std::ostream&	operator<<(std::ostream&os, const Fixed& fixed_number)
{
	return (os << fixed_number.toFloat());
}

bool	Fixed::operator>(const Fixed& rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed& rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(const Fixed& rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	Fixed	result;
	
	result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_nb_bits_fractionnal);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed	result;
	
	result.setRawBits((this->getRawBits() / rhs.getRawBits()) << this->_nb_bits_fractionnal);
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->_fixed_point_number++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	operator++();
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_fixed_point_number--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	operator--();
	return (temp);
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

Fixed& Fixed::min(Fixed& lhs, Fixed &rhs)
{
	if(lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const	Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if(lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed &rhs)
{
	if(lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const	Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if(lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}
