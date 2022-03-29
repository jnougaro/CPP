/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:12:03 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 17:47:18 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;	
		return (1);
	}
	std::cout << "\033[1;33mUsing randomChump function: \033[0m" << std::endl;
	randomChump("Foo");	
	std::cout << std::endl;

	std::cout << "\033[1;33mUsing newZombie function: \033[0m" << std::endl;
	Zombie* Bob = newZombie("Bob");	
	Bob->announce();
	delete Bob;
	return (0);
}
