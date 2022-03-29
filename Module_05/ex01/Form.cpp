/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:43:19 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 15:38:29 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Random"), _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
	return ;
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "Form Constructor called" << std::endl;
	if (this->_signGrade < 1 or this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 or this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	std::cout << "Form Copy constructor called" << std::endl;
	if (this->_signGrade < 1 or this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 or this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	*this = copy;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << ", form sign grade: " << form.getSignGrade() << ", form execute grade: " << form.getExecuteGrade() << ", is signed or not: " << form.getSigned() << std::endl;
	return (os);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

const int&	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	Form::getExecuteGrade(void) const
{
	return (this->_executeGrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
	return ;
}
