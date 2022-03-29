/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:30:58 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/22 15:32:02 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <cstdlib>

class Contact {

public:

	Contact(void);
	~Contact(void);

	int		fill_contact(void);	
	void	print_contacts(int i) const;
	void	len_column(std::string str) const;
	void	print_one_contact(void) const;

private:

 	std::string     _First_Name;
	std::string     _Last_Name;
	std::string     _Nickname;
	std::string     _Phone_Number;
	std::string     _Darkest_Secret;

};

#endif
