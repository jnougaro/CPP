/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:53:18 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 13:58:26 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal 
{
	public:
	
		Cat(void);
		Cat(const Cat& copy);
		virtual ~Cat(void);

		Cat&	operator=(const Cat& rhs); 

		virtual void	makeSound(void) const;		

};

#endif
