/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:03:57 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 14:08:51 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137, "Default target")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setSigned(rhs.getSigned());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();

	std::ofstream outfile((this->getTarget() + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw AForm::CouldNotOpenFileException();
	outfile << "       		 ,@@@@@@@,               " << std::endl
    		<< "	 ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
 			<< "  ,&%&&%&&%,@@@@@/@@@@@@,8888888/8o  " << std::endl
   			<< " ,%&&%&&%&&%,@@@@@@@/@@@88888888/88'  " << std::endl
  			<< " %&&%&%&/%&&%@@@@@/ /@@@88888888888' " << std::endl
  			<< " %&&%/ %&&@&&@@@ V /@@' `8888 `/88'  " << std::endl
 			<< " `&&& ` /%&'    |.|         | '|8'   " << std::endl
       		<< "     |o|        | |         | |      " << std::endl
      		<< "	 |.|        | |         | |      " << std::endl
			<< "  ___|.|_/___/_ | |/___|__|/| |__/_ " << std::endl;
	outfile.close();
	return ;
}
