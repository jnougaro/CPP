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

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
	
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		virtual ~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat& rhs); 

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	incrementeGrade(void);
		void	decrementeGrade(void);

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
		int			_grade;

};

	std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
