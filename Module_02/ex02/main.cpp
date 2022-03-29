/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:45:10 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/28 17:47:48 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a(10);
	Fixed	b(5);
	Fixed	c(5);

	std::cout << "\033[1;33mArithmetics operators: \033[0m" << std::endl;
	std::cout << "a + b: " << a + b << std::endl;	
	std::cout << "a - b: " << a - b << std::endl;	
	std::cout << "a * b: " << a * b << std::endl;	
	std::cout << "a / b: " << a / b << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;33mComparison operators: \033[0m" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;	
	std::cout << "b > a: " << (b > a) << std::endl;	
	std::cout << "a <= b: " << (a <= b) << std::endl;	
	std::cout << "c == b: " << (c == b) << std::endl;	
	std::cout << "a == b: " << (a == b) << std::endl;	
	std::cout << "a != b: " << (a != b) << std::endl;	
	std::cout << "c != b: " << (c != b) << std::endl;
	
	Fixed	i(10);
	Fixed	j(20);

	std::cout << std::endl;
	std::cout << "\033[1;33mMin and Max functions: \033[0m" << std::endl;
	std::cout << "The min between i: " << i << " and j: " << j <<  " is: " << Fixed::min(i, j) << std::endl;
	std::cout << "The max between i: " << i << " and j: " << j <<  " is: " << Fixed::max(i, j) << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;33mSubject example: \033[0m" << std::endl;

	Fixed	x;
	Fixed	const y(Fixed(5.05f) * Fixed(2));

	std::cout << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << x << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << Fixed::max(x, y) << std::endl;

	return (0);
}
