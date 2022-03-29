/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:23:43 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/03 15:21:51 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	std::cout << "\033[1;33mCalling Constructors:\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << std::endl;
	std::cout << "\033[1;34mDisplaying the animal's type:\033[0m" << std::endl;
	std::cout << "Type: " << meta->getType() << std::endl;
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;34mDisplaying the animal's sound:\033[0m" << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wa->makeSound();
	wc->makeSound();

	std::cout << std::endl;
	std::cout << "\033[1;33mCalling Destructors:\033[0m" << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete wa;
	delete wc;
	return (0);	
}
