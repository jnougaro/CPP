/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:19:16 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/02 11:49:03 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "\033[0;33mCalling Constructor on ClapTrap:\033[0m" << std::endl;
	ClapTrap	geralt("Geralt");
	ClapTrap	hag("Hag");
	ClapTrap	other(geralt);
	ClapTrap	random;

	std::cout << std::endl;
	std::cout << "\033[0;34mattack function demonstration:\033[0m" << std::endl;
	geralt.attack("Hag");
	other.attack("Hag");
	hag.attack("Geralt");
	random.attack("Geralt");

	std::cout << std::endl;
	std::cout << "\033[0;31mtakeDamage function demonstration:\033[0m" << std::endl;
	geralt.takeDamage(0);
	geralt.takeDamage(0);

	std::cout << std::endl;
	std::cout << "\033[0;32mbeRepaired function demonstration:\033[0m" << std::endl;
	geralt.beRepaired(0);
	random.beRepaired(0);

	std::cout << std::endl;
	std::cout << "\033[0;33mCalling Destructor on ClapTrap:\033[0m" << std::endl;

	return (0);
}
