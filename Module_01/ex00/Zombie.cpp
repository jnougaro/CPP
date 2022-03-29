/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:53:55 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 11:20:46 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) 
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": Destructor called" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
