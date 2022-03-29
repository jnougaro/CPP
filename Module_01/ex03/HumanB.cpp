/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:11:34 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 16:41:25 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::string	weapon_type;

	if (!_weapon)
		weapon_type = "foot"; 
	else
		weapon_type = _weapon->getType();
	std::cout << this->_name << " attacks with their " << weapon_type << std::endl; 
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
