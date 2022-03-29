/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:56:19 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/23 11:20:36 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;

	private:

		std::string	_name;
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif
