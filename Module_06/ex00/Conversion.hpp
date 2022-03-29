/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:06:37 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/10 15:09:19 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <limits.h>
#include <math.h>

class Conversion
{
	public:
	
		Conversion(void);
		Conversion(const std::string input);
		Conversion(const Conversion& copy);
		~Conversion(void);

		Conversion&	operator=(const Conversion& rhs);

		char	toChar(void);
		int		toInt(void);
		float	toFloat(void);
		double	toDouble(void);

	class WrongFormatException : public std::exception
	{
		const char* what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
		const char* what() const throw();
	};

	class NonConvertibleException : public std::exception
	{
		const char* what() const throw();
	};

	private:

		bool	checkInputFormat(const std::string input) const;
		double	_tempDouble;

};

#endif
