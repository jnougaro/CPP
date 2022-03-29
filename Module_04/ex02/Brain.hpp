/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:30:50 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 15:33:22 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:

		Brain(void);
		Brain(const Brain& copy);
		virtual ~Brain(void);

		Brain&	operator=(const Brain& rhs);

		std::string _ideas[100];

};

#endif
