/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:26:19 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/09 14:10:03 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdlib.h>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Bureaucrat;

class Intern
{
	public:
	
		Intern(void);
		Intern(const Intern& copy);
		virtual ~Intern(void);

		Intern&	operator=(const Intern& rhs);

		AForm*	makeForm(const std::string formName, const std::string target);

	private:

		static AForm*	newShrubberyForm(const std::string& target); 
		static AForm*	newRobotomyForm(const std::string& target); 
		static AForm*	newPresidentialForm(const std::string& target); 

};

#endif
