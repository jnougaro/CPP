/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:43:01 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/11 11:44:07 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	*ptr = new Data;
	ptr->number = serialize(ptr);
	Data	*ret_deserialize = deserialize(ptr->number);

	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "Deserialize: " << ret_deserialize << std::endl;
	std::cout << "Serialize: " << ptr->number << std::endl;
	std::cout << "Deserialize Serialize " << deserialize(ptr->number) << std::endl;
	
	delete ptr;

	return (0);
}
