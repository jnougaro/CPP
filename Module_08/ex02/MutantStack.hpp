/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:09 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/16 15:55:30 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <stack>

template < typename T >
class MutantStack : public std::stack< T >
{
	public:

		typedef typename std::stack< T >::container_type::iterator			iterator;
		typedef typename std::stack< T >::container_type::const_iterator	const_iterator;

		MutantStack(void) {}
		MutantStack(const MutantStack& copy) { *this = copy; }
		~MutantStack(void) {}

		MutantStack& operator=(const MutantStack& rhs)
		{
			std::stack< T >::operator=(rhs);
		}

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return(this->c.end());
		}

		const_iterator	begin(void) const
		{
			return (this->c.begin());
		}

		const_iterator	end(void) const
		{
			return(this->c.end());
		}

};

#endif
