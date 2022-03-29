/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:40:02 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/04 14:48:57 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

// CHANGER header pour .hpp et .cpp

class Bureaucrat;

class Form
{
	public:
	
		Form(void);
		Form(const std::string name, const int signGrade, const int executeGrade);
		Form(const Form& copy);
		virtual ~Form(void);

		Form&	operator=(const Form& rhs);

		void	beSigned(Bureaucrat& bureaucrat);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		const int&			getSignGrade(void) const;
		const int&			getExecuteGrade(void) const;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};

	private:

		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;

};

	std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
