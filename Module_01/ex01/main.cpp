/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:12:03 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 17:45:09 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie* horde = NULL;

	(void)argv;
	if (argc > 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;	
		return (1);
	}
	
	std::cout << "Initializing 5 Tsunami" << std::endl;
	horde = zombieHorde(5, "Tsunami");

	std::cout << "\033[1;33mEach Tsunami announce himself:\033[0m" << std::endl;
	for (int i = 0; i < 5; i++)
		horde[i].announce();	
		
	std::cout << "\033[1;31mThe Destructor destroys 5 Tsunami:\033[0m" << std::endl;
	delete [] horde;
	return (0);
}
