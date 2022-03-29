/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:21:07 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 15:05:41 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Canonical functions */

AForm::AForm(void) : _name("Unknown Form"), _target("Default target"), _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "AForm Default Constructor called" << std::endl;
	return ;
}

AForm::AForm(const std::string name, const int signGrade, const int executeGrade, const std::string target) : _name(name), _target(target), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "AForm Constructor called" << std::endl;
	if (this->_signGrade < 1 or this->_executeGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->_signGrade > 150 or this->_executeGrade > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(const AForm& copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	if (this->_signGrade < 1 or this->_executeGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->_signGrade > 150 or this->_executeGrade > 150)
		throw AForm::GradeTooLowException();
	*this = copy;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "AForm Destructor called" << std::endl;
	return ;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	const_cast<std::string&>(this->_name) = rhs._name;
	const_cast<std::string&>(this->_target) = rhs._target;
	const_cast<int&>(this->_signGrade) = rhs._signGrade;
	const_cast<int&>(this->_executeGrade) = rhs._executeGrade;
	this->_signed = rhs._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << form.getName() << ", form sign grade: " << form.getSignGrade() << ", form execute grade: " << form.getExecuteGrade() << ", is signed or not: " << form.getSigned() << std::endl;
	return (os);
}

/* Accessors */

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

const std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

const int&	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	AForm::getExecuteGrade(void) const
{
	return (this->_executeGrade);
}

/* Exceptions */

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form was not signed");
}

const char* AForm:: CouldNotOpenFileException::what() const throw()
{
	return ("Could not open file");
}

/* Other functions */

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
	return ;
}

void	AForm::setSigned(bool value)
{
	this->_signed = value;
	return ;
}
