/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:54:10 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/14 14:52:30 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdlib.h>
#include <time.h>

#define SIZE	10

int main(void)
{
	try
	{
		std::cout << "\033[1;33mExample with negative size:\033[0m" << std::endl;
		Array< int > arr(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array< int > arr(SIZE);

		std::cout << std::endl;
		std::cout << "\033[1;33mExample with an invalid index:\033[0m" << std::endl;

		std::cout << "\033[34msize: " << arr.size() << "\033[0m" << std::endl << std::endl;
		srand(time(NULL));
		for (int i = 0; i < 11; i++)
			arr[i] = rand();
		for (int i = 0; i < 11; i++)
			std::cout << "[" << arr[i] << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array< int > arr(SIZE);

		std::cout << std::endl;
		std::cout << "\033[1;33mExample with an int array:\033[0m" << std::endl;

		std::cout << "\033[34msize: " << arr.size() << "\033[0m" << std::endl << std::endl;
		srand(time(NULL));
		for (int i = 0; i < SIZE; i++)
			arr[i] = rand();
		for (int i = 0; i < 10; i++)
			std::cout << "[" << arr[i] << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array< std::string > arr_string(3);

		std::cout << std::endl;
		std::cout << "\033[1;33mExample with a string array:\033[0m" << std::endl;

		std::cout << "\033[34msize: " << arr_string.size() << "\033[0m" << std::endl << std::endl;
		arr_string[0] = "coucou";
		arr_string[1] = "salut";
		arr_string[2] = "bonjour";
		for (int i = 0; i < 3; i++)
			std::cout << "[" << arr_string[i] << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array< float > arr;
		Array< float > arr_2(SIZE);

		arr = arr_2;
		std::cout << std::endl;
		std::cout << "\033[1;33mExample with a float array:\033[0m" << std::endl;

		std::cout << "\033[34msize: " << arr.size() << "\033[0m" << std::endl << std::endl;
		for (int i = 0; i < SIZE; i++)
			arr[i] = rand();
		for (int i = 0; i < SIZE; i++)
			std::cout << "[" << arr[i] << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
