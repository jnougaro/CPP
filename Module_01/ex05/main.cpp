/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:47:48 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/24 16:30:14 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;

	std::cout << "\033[1;31mKaren complains at level DEBUG:\033[0m" << std::endl;
	karen.complain("DEBUG");
	std::cout << "\033[1;31mKaren complains at level INFO:\033[0m" << std::endl;
	karen.complain("INFO");
	std::cout << "\033[1;31mKaren complains at level WARNING:\033[0m" << std::endl;
	karen.complain("WARNING");
	std::cout << "\033[1;31mKaren complains at level ERROR:\033[0m" << std::endl;
	karen.complain("ERROR");
	return (0);
}
