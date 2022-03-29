/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:53:05 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/14 15:06:51 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <stdlib.h>
# include <time.h>

template< typename T >
class Array
{
	public:

		Array(void) : _size(0), _array(NULL) {}
		Array(unsigned int n) : _size(n), _array(new T[n]) {}
		Array(const Array& copy) : _size(0), _array(NULL) { *this = copy; }
		~Array(void) { delete[] this->_array; }

		class InvalidIndexException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Invalid Index");
			}
		};

		Array&	operator=(const Array& rhs)
		{
			if (this->_array)
				delete [] this->_array;

			this->_size = rhs._size;
			if (this->_size == 0)
				return (*this);
			this->_array = NULL;

			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];

			return (*this);
		}

		T & operator[](unsigned int index)
		{
			if (index < 0 or index >= this->_size)
				throw Array::InvalidIndexException();
			return (this->_array[index]);
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}

	private:
	
		unsigned int	_size;
		T*				_array;

};

#endif
