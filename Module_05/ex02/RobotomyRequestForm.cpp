/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:21:23 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 14:22:24 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45, "Default target")
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setSigned(rhs.getSigned());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const 
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::cout << "*** UNBEAREABLE DRILL SOUNDS ***" << std::endl;
	
	srand (time(NULL));
	if (rand() % 2)
		std::cout << "*** " << this->getTarget() << " was ROBOTOMIZED with success! ***" << std::endl;
	else
		std::cout << this->getTarget() << " was NOT robotomized" << std::endl;

	return ;
}
