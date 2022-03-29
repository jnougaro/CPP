/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:47:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 12:09:37 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	(void)argv;
	if (argc > 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;	
		return (1);
	}

	std::cout << "Display the string's address: " << &string << std::endl;
	std::cout << "Display the address stored in stringPTR: " << stringPTR << std::endl;
	std::cout << "Display the address stored in stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String's value: " << string << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

	return (0);
}
