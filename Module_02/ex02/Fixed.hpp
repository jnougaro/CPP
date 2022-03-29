/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:27:12 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/01 09:35:09 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		~Fixed(void);

		Fixed&	operator=(const Fixed& nb); 

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed& rhs) const;
		bool	operator<(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;

		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static	Fixed& min(Fixed& lhs, Fixed &rhs);	
		static	Fixed& max(Fixed& lhs, Fixed &rhs);

		static const	Fixed& min(const Fixed& lhs, const Fixed &rhs);
		static const	Fixed& max(const Fixed& lhs, const Fixed &rhs);

	private:

		int					_fixed_point_number;
		static const int	_nb_bits_fractionnal = 8;

};

	std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_number);

#endif
