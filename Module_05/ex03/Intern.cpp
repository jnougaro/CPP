/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:10 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/09 11:50:06 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

AForm*	Intern::makeForm(const std::string formName, const std::string target)
{
	AForm* form = NULL;
	std::string form_name[3] =	{
									"shrubbery creation",
									"robotomy request",
									"presidential pardon"
								};

	AForm* (*functions[3])(const std::string& target) = {
															Intern::newShrubberyForm,
															Intern::newRobotomyForm,
															Intern::newPresidentialForm
														};

	for (int i = 0; i < 3; i++)
	{
		if (formName == form_name[i])
		{
			form = functions[i](target);
			std::cout << "\033[33mIntern creates " << formName << "\033[0m" << std::endl;
			return (form);
		}
	}
	std::cout << "\033[31m" << formName << " was not created because this Form doesn't exist\033[0m" << std::endl;
	return (form);
}

AForm*	Intern::newShrubberyForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::newRobotomyForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::newPresidentialForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}