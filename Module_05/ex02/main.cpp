/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 13:01:36 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp" 

int main(void)
{
	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 1:\033[0m" << std::endl;
		std::cout << std::endl;

		Bureaucrat				jardinus("Jardinus", 1);
		Bureaucrat				ratus("Ratus", 146);
		ShrubberyCreationForm	grove("Jardinus");
		std::cout << std::endl;
		ratus.signForm(grove);
		jardinus.executeForm(grove);
		jardinus.signForm(grove);
		jardinus.executeForm(grove);
		std::cout << std::endl;
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

		Bureaucrat			michel("Michel", 72);
		Bureaucrat			brigitte("Brigitte", 45);
		RobotomyRequestForm	robo("Michel");	
		std::cout << std::endl;
		michel.signForm(robo);
		brigitte.executeForm(robo);
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

		Bureaucrat			prime("Prime Minister", 26);
		Bureaucrat			president("President", 1);
		PresidentialPardonForm	pardon("Prime Minister");	
		std::cout << std::endl;
		prime.signForm(pardon);
		prime.incrementeGrade();
		prime.signForm(pardon);
		president.executeForm(pardon);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
