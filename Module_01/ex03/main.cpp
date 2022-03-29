/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:32:45 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 17:41:49 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;	
		return (1);
	}
	
	{
		std::cout << "\033[1;33mPokemonA is attacking:\033[0m" << std::endl;
		Weapon	club = Weapon("Mimic");
		HumanA	bob("Pikachu", club);
		bob.attack();
		club.setType("Thunder");
		bob.attack();
		std::cout << std::endl;
	}
	{
		std::cout << "\033[1;33mPokemonB is attacking:\033[0m" << std::endl;
		Weapon	club = Weapon("Mimic");
		HumanA	bob("Pyroli", club);
		bob.attack();
		club.setType("Flamethrower");
		bob.attack();
		std::cout << std::endl;
	}
	std::cout << "SUBJECT EXAMPLE" << std::endl << std::endl;
	{
		std::cout << "\033[1;33mHumanA is attacking:\033[0m" << std::endl;
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << std::endl;
	}
	{
		std::cout << "\033[1;33mHumanB is attacking:\033[0m" << std::endl;
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");	
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return (0);
}
