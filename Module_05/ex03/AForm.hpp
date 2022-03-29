/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:09:14 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/08 11:48:17 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
	
		AForm(void);
		AForm(const std::string name, const int signGrade, const int executeGrade, const std::string target);
		AForm(const AForm& copy);
		virtual ~AForm(void);

		AForm&	operator=(const AForm& rhs);

		void	beSigned(Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const& executor) const = 0;
	
		const std::string	getName(void) const;
		const std::string	getTarget(void) const;
		bool				getSigned(void) const;
		const int&			getSignGrade(void) const;
		const int&			getExecuteGrade(void) const;
		void				setSigned(bool value);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		const char* what() const throw();
	};

	class CouldNotOpenFileException : public std::exception
	{
		const char* what() const throw();
	};

	private:

		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;

};

	std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
