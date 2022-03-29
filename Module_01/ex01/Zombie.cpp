/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:53:55 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 11:28:16 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": Destructor called" << std::endl;
	return ;
}

void	Zombie::get_name(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
