/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:38:44 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/22 16:05:44 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook(void) {

	return;
}

void	PhoneBook::display_commands(void) const {
	
	std::cout << std::endl;
	std::cout << "# What will you do ? <ADD> <SEARCH> <EXIT>" << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::add(void) {

	if (this->_new_contact.fill_contact() == 1)
	{
		std::cout << "One field is empty, the contact was not saved" << std::endl;
		return ;
	}
	std::cout << "Your new contact has been added to your PhoneBook!" << std::endl;
	this->_tab_contacts[this->_index] = _new_contact;
	if (this->_index < 7)
		this->_index++;
	else
		this->_index = 0;

}	

int	PhoneBook::check_index(std::string entry) {

	int		i = 0;
	char	*str = NULL;

	str = (char *)entry.c_str();
	while (str[i])
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
        {
            std::cout << "The index must be a digit between 1 and 8, please try again!" << std::endl;
            return (1);
        }
        i++;
    }
	return (0);

}

void	PhoneBook::search(void) {

	int			i;
	int			index;
	std::string	entry;
	
	i = 0;
	while (i < 8)
	{
		this->_tab_contacts[i].print_contacts(i);
		i++;
	}
	std::cout << "Please enter the contact's index of your choice:" << std::endl;
	std::getline(std::cin, entry);
	if (check_index(entry) == 1)
		return ;
	index = std::atoi(entry.c_str());
	if (index > 0 && index < 9)
		this->_tab_contacts[index - 1].print_one_contact();
	else
		std::cout << "The index you entered is not between 1 and 8, please try again!" << std::endl;
	return;

}
