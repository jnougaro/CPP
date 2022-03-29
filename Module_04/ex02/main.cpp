/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/04 10:07:03 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << "\033[1;31mSUBJECT EXAMPLE:\033[0m" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1;33mCalling Constructors:\033[0m" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << std::endl;
		std::cout << "\033[1;33mCalling Destructors:\033[0m" << std::endl;
		delete j;
		delete i;
	}

	{
		std::cout << std::endl;
		std::cout << "\033[1;31mTAB EXEMPLE:\033[0m" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1;33mInitializing Animal tab:\033[0m" << std::endl;
		const int	nb_animals = 10;
		AAnimal	*tab[10];

		for (int i = 0; i < nb_animals; i++)
		{
			if (i < nb_animals / 2)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

		std::cout << std::endl;
		std::cout << "\033[1;34mCalling getType function on Animal tab:\033[0m" << std::endl;
		for (int i = 0; i < nb_animals; i++)
			std::cout << "Type: " << tab[i]->getType() << std::endl;

		std::cout << std::endl;
		std::cout << "\033[1;34mCalling makeSound function on Animal tab:\033[0m" << std::endl;
		for (int i = 0; i < nb_animals; i++)
			tab[i]->makeSound();

		std::cout << std::endl;
		std::cout << "\033[1;33mCalling Destructors:\033[0m" << std::endl;
		for (int i = 0; i < nb_animals; i++)
			delete tab[i];
	}
	
	return (0);
}
