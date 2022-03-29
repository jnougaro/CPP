/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:08:42 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 13:58:13 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
	
		Animal(void);
		Animal(const Animal& copy);
		virtual ~Animal(void);

		Animal&	operator=(const Animal& rhs); 

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:

		std::string	_type;

};

#endif
