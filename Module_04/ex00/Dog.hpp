/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:25:17 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 13:58:19 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
	
		Dog(void);
		Dog(const Dog& copy);
		virtual ~Dog(void);

		Dog&	operator=(const Dog& rhs); 

		virtual void	makeSound(void) const;		

};

#endif
