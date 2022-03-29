/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:19:16 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/02 11:57:32 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\033[0;33mCalling Construtors:\033[0m" << std::endl;
	ClapTrap pok_1("Arcanine");
	ScavTrap pok_2("Noctali");

	std::cout << std::endl;
	std::cout << "\033[0;34mattack function demonstration:\033[0m" << std::endl;
	pok_1.attack("Noctali");
	pok_2.attack("Arcanine");

	std::cout << std::endl;
	std::cout << "\033[0;31mtakeDamage function demonstration:\033[0m" << std::endl;
	pok_1.takeDamage(20);
	pok_2.takeDamage(0);

	std::cout << std::endl;
	std::cout << "\033[0;32mbeRepaired function demonstration:\033[0m" << std::endl;
	pok_1.beRepaired(10);
	pok_2.beRepaired(0);

	std::cout << std::endl;
	std::cout << "\033[0;32mguardGate function demonstration:\033[0m" << std::endl;
	pok_2.guardGate();

	std::cout << std::endl;
	std::cout << "\033[0;33mCalling Destructors:\033[0m" << std::endl;

	return (0);
}
