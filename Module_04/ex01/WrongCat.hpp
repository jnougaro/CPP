/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:53:36 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 15:32:55 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:

		WrongCat(void);
		WrongCat(const WrongCat& copy);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat& rhs); 

		void	makeSound(void) const;		

};

#endif
