/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:16:59 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/10 15:18:58 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/******************** CONSTRUCTORS AND DESTRUCTOR ********************/

Conversion::Conversion(void) : _tempDouble(0.0)
{
	std::cout << "Conversion Default Constructor called" << std::endl;
	return ;
}

Conversion::Conversion(const std::string input) : _tempDouble(0.0)
{
	std::cout << "Conversion Constructor called" << std::endl;
	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
	{	
		_tempDouble = static_cast<double>(input[0]);
		return ;
	}
	if (!this->checkInputFormat(input))
		throw Conversion::WrongFormatException();

	_tempDouble = std::atof(input.c_str());

	return ;
}

Conversion::Conversion(const Conversion& copy) : _tempDouble(copy._tempDouble)
{
	std::cout << "Conversion Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Conversion::~Conversion(void)
{
	std::cout << "Conversion Destructor called" << std::endl;
	return ;
}

/******************** OPERATOR OVERLOAD ********************/

Conversion&	Conversion::operator=(const Conversion& rhs)
{
	std::cout << "Conversion copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_tempDouble = rhs._tempDouble;
	return (*this);
}

/******************** EXCEPTIONS ********************/

const char* Conversion::WrongFormatException::what() const throw()
{
	return ("Input has wrong format");
}

const char* Conversion::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char* Conversion::NonConvertibleException::what() const throw()
{
	return ("impossible");
}

/******************** MEMBER FUNCTIONS ********************/

bool	Conversion::checkInputFormat(const std::string input) const
{
	bool	precision = false;
	std::string specialValues[8] = { "inf", "-inf", "+inf", "inff", "-inff", "+inff", "nan", "nanf" };
	for (int i = 0; i < 8; i++)
	{
		if (input == specialValues[i])
			return (true);
	}

	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			if (i == 0 && (input[i] == '+' or input[i] == '-'))
				continue;
			else if (input[i] == 'f' && i == (input.length() - 1))
				continue;
			else if (input[i] == '.' && !precision)
			{
				precision = true;
				continue;
			}
			else
				return (false);
		}
	}

	return (true);
}

char	Conversion::toChar(void)
{
	if (std::isnan(this->_tempDouble) || std::isinf(this->_tempDouble) || this->_tempDouble < 0 || this->_tempDouble > 128)
		throw Conversion::NonConvertibleException();

	if (!std::isprint(this->_tempDouble))
		throw Conversion::NonDisplayableException();

	return (static_cast<char>(this->_tempDouble));
}

int		Conversion::toInt(void)
{
	if (std::isnan(this->_tempDouble) || std::isinf(this->_tempDouble) || this->_tempDouble < INT_MIN || this->_tempDouble > INT_MAX)
		throw Conversion::NonConvertibleException();

	return (static_cast<int>(this->_tempDouble));
}

float	Conversion::toFloat(void)
{
	return (static_cast<float>(this->_tempDouble));
}

double	Conversion::toDouble(void)
{
	return (this->_tempDouble);
}