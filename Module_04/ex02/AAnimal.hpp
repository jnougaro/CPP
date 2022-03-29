/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:52:17 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 17:52:18 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:

		AAnimal(void);
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal(void);

		AAnimal&	operator=(const AAnimal& rhs); 

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:

		std::string	_type;

};

#endif
