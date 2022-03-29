/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:27:12 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/25 14:52:40 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed& copy);
		~Fixed(void);

		Fixed&	operator=(const Fixed& nb); 

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_fixed_point_number;
		static const int	_nb_bits_fractionnal;

};

#endif
