/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 15:34:30 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 1:\033[0m" << std::endl;
		std::cout << std::endl;
		Bureaucrat	prefectus("Prefectus", 1);
		Form		pass("A38", 2, 2);
		std::cout << std::endl;
		std::cout << "\033[33m" << prefectus << "\033[0m";
		std::cout << "\033[35m" << pass << "\033[0m" << std::endl;
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
		Form	pass("A37", 151, 151);
		std::cout << std::endl;
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
		Bureaucrat	lentus("Lentus", 20);
		Form		pass("A39", 30, 30);
		std::cout << std::endl;
		std::cout << "\033[33m" << lentus << "\033[0m";
		std::cout << "\033[35m" << pass << "\033[0m" ;
		lentus.signForm(pass);
		std::cout << "\033[35m" << pass << "\033[0m" ;
		std::cout << std::endl;
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
		Bureaucrat	asterix("Asterix", 31);
		Form		pass("A36", 30, 30);
		std::cout << std::endl;
		std::cout << "\033[33m" << asterix << "\033[0m";
		std::cout << "\033[35m" << pass << "\033[0m" ;
		asterix.signForm(pass);
		std::cout << "\033[35m" << pass << "\033[0m" ;
		asterix.incrementeGrade();
		std::cout << "\033[33m" << asterix << "\033[0m";
		asterix.signForm(pass);
		std::cout << "\033[35m" << pass << "\033[0m" ;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
