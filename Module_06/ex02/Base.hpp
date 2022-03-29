/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:34:02 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/11 14:34:04 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class Base
{
	public:

		virtual ~Base(void);
	
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
