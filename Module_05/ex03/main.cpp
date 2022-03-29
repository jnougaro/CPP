/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/10 14:08:45 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		std::cout << std::endl;
		std::cout << "	\033[1;34mExample 1:\033[0m" << std::endl;
		std::cout << std::endl;

		Intern noob;
		AForm* form;
		Bureaucrat bob("Bob", 40);
		std::cout << std::endl;
		form = noob.makeForm("robotomy request", "Bender");
		std::cout << *form;
		bob.signForm(*form);
		bob.executeForm(*form);
		std::cout << std::endl;
		delete form;
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

		Intern noob;
		AForm* form;
		std::cout << std::endl;
		form = noob.makeForm("unknown form", "Brigitte");
		std::cout << std::endl;
		delete form;
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

		Intern noob;
		AForm* form;
		AForm* form_1;
		std::cout << std::endl;
		form = noob.makeForm("shrubbery creation", "Brigitte");
		form_1 = noob.makeForm("presidential pardon", "Emmanuel");
		std::cout << std::endl;
		delete form;
		delete form_1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
