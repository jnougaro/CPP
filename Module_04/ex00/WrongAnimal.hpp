/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:55:10 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 14:55:16 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
	
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy);
		~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& rhs); 

		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:

		std::string	_type;

};

#endif
