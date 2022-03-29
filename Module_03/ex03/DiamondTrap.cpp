/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:39:54 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/02 13:41:57 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Random_clap_name"), ScavTrap(), FragTrap(), _name("Random")
{
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "DiamondTrap [" << this->_name << "] Name constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap [" << this->_name << "] Copy constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap [" << this->_name << "] Destructor called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (&rhs == this)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is: [" << this->_name << "] and ClapTrap name is [" << this->ClapTrap::_name << "]" << std::endl;
	return ;
}