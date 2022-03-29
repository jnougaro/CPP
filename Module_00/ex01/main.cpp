/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:00:49 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/22 11:31:55 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	entry;
	int			end;
	(void)argv;

	if (argc > 1)
	{
		std::cout << "Please enter only one argument" << std::endl;
		return (1);
	}
	std::cout << std::endl;
	std::cout << "     *** WELCOME TO THE PHONEBOOK ***" << std::endl;
	end = 0;
	while (end == 0 && !std::cin.eof())
	{
		phonebook.display_commands();
		std::cout << "> ";
		std::getline(std::cin, entry);
		if (entry == "ADD")
		{
			std::cout << "Please, complete the info of the new contact:" << std::endl;	
			phonebook.add();
		}
		else if (entry == "SEARCH")
			phonebook.search();
		else if (entry == "EXIT")
		{
			std::cout << std::endl;
			std::cout << "     *** YOU LEFT THE PHONEBOOK ***" << std::endl;
			std::cout << std::endl;
			end = 1;
		}
	}
	return (0);
}
