/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:53:07 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 17:53:37 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Unknown")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	*this = copy;
	std::cout << "AAnimal Copy constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Unknown AAnimal noise" << std::endl;
	return ;
}
