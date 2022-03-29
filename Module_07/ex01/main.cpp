/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:54:10 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/14 15:42:57 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define SIZE 5

int main(void)
{
	int			int_tab[SIZE] = { 1, 2, 3, 4, 5 };
	float		float_tab[SIZE] = { 10.42, 100.24, 8.42, 9.60, 1.01};
	char		char_tab[SIZE] = { 'a', 'b', 'c', 'd', 'e'};
	std::string	string_tab[SIZE] = { "coucou", "comment", "ça", "va", "?" };

	std::cout << "\033[1;33mExample with an int array:\033[0m" << std::endl;
	iter(int_tab, SIZE, &display);
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;33mExample with a float array:\033[0m" << std::endl;
	iter(float_tab, SIZE, &display);
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;33mExample with a char array:\033[0m" << std::endl;
	iter(char_tab, SIZE, &display);
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;33mExample with a string array:\033[0m" << std::endl;
	iter(string_tab, SIZE, &display);
	std::cout << std::endl;

	return (0);
}
