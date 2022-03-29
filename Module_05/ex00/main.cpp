/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 15:03:41 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 1:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat	claudius("Claudius", 150);
		Bureaucrat	prefectus("Prefectus", 1);
		Bureaucrat	copius("Copius", 140);
		copius = claudius;
		std::cout << std::endl;
		std::cout << "\033[33m" << claudius << prefectus << copius << "\033[0m" << std::endl;
		claudius.incrementeGrade();
		prefectus.decrementeGrade();
		std::cout << "\033[33m" << claudius << prefectus << "\033[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 2:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat erratum("Erratum", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 3:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat erratus("Erratus", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 4:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat cretinus("Cretinus", 150);
		std::cout << std::endl;
		std::cout << "\033[33m" << cretinus << "\033[0m";
		std::cout << std::endl;
		cretinus.decrementeGrade();
		std::cout << "\033[33m" << cretinus << "\033[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 5:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat genius("Genius", 1);
		std::cout << std::endl;
		std::cout << "\033[33m" << genius << "\033[0m";
		std::cout << std::endl;
		genius.incrementeGrade();
		std::cout << "\033[33m" << genius << "\033[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
