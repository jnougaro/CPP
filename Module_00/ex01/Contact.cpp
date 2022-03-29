/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:53:55 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/22 15:31:55 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

	return;
}

Contact::~Contact(void) {

	return;
}

int	Contact::fill_contact(void) {

	std::cout << "First_Name: ";
	std::getline(std::cin, this->_First_Name);
	if (this->_First_Name.empty())
		return (1);
	std::cout << "Last_Name: ";
	std::getline(std::cin, this->_Last_Name);
	if (this->_Last_Name.empty())
		return (1);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_Nickname);
	if (this->_Nickname.empty())
		return (1);
	std::cout << "Phone_Number: ";
	std::getline(std::cin, this->_Phone_Number);
	if (this->_Phone_Number.empty())
		return (1);
	std::cout << "Darkest_Secret: ";
	std::getline(std::cin, this->_Darkest_Secret);
	if (this->_Darkest_Secret.empty())
		return (1);
	return (0);
	
}

void	Contact::len_column(std::string str) const {

	int	j = 0;

	if (strlen(str.c_str()) > 10)
	{
		while (j < 9)
		{
			std::cout << str[j];
			j++;
		}
		std::cout << "." << "|";
	}
	else
		std::cout << std::setw(10) << str << "|";
	return ;
}

void	Contact::print_one_contact(void) const {

	if (!this->_First_Name.empty())
	{
		std::cout << "First Name: " << this->_First_Name << std::endl;
		std::cout << "Last Name: " << this->_Last_Name << std::endl;
		std::cout << "Nickname: " << this->_Nickname << std::endl;
		std::cout << "Phone Number: " << this->_Phone_Number << std::endl;
		std::cout << "Darkest Secret: " << this->_Darkest_Secret << std::endl;
	}
	else
		std::cout << "This contact does not exist!" << std::endl;
	return ;

}

void	Contact::print_contacts(int i) const {

	if (!this->_First_Name.empty())
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		len_column(this->_First_Name);
		len_column(this->_Last_Name);
		len_column(this->_Nickname);
		std::cout << std::endl;
	}

}
