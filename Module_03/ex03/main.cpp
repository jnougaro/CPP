/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:19:16 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/01 10:19:36 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "\033[0;33mCalling Constructors:\033[0m" << std::endl;
	ClapTrap pok_1("Arcanine");
	DiamondTrap pok_2("Pikachu");

	std::cout << std::endl;
	std::cout << "\033[0;34mattack function demonstration:\033[0m" << std::endl;
	pok_1.attack("Pikachu");
	pok_2.attack("Arcanine");

	std::cout << std::endl;
	std::cout << "\033[0;31mtakeDamage function demonstration:\033[0m" << std::endl;
	pok_1.takeDamage(30);
	pok_2.takeDamage(0);

	std::cout << std::endl;
	std::cout << "\033[0;32mbeRepaired function demonstration:\033[0m" << std::endl;
	pok_2.beRepaired(0);

	std::cout << std::endl;
	std::cout << "\033[0;32mwhoAmI function demonstration:\033[0m" << std::endl;
	pok_2.whoAmI();

	std::cout << std::endl;
	std::cout << "\033[0;33mCalling Destructors:\033[0m" << std::endl;

	return (0);
}