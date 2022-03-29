/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:53:01 by jnougaro          #+#    #+#             */
/*   Updated: 2022/02/24 14:40:43 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		ft_replace(std::string line, const std::string s1, const std::string s2)
{
	size_t	index = 0;

	while (index < line.length())
	{
		index = line.find(s1, index);
		if (index >= line.length())
			return (line);
		line.erase(index, s1.length());
		line.insert(index, s2);
		index += s2.length() - 1;
		index++;
	}
	return (line);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];	
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	line;	

	if (filename.empty() or s1.empty() or s2.empty()) 
	{
		std::cout << "The argument you entered is empty" << std::endl;
		return (1);
	}

	std::ifstream	infile(filename.c_str(), std::ifstream::in);
	if (!infile.is_open())
	{
		std::cout << "Infile could not be opened" << std::endl;
		return (1);
	}
	std::ofstream	outfile(filename.append(".replace").c_str(), std::ifstream::in | std::ofstream::trunc);
	if (!outfile.is_open())
	{
		std::cout << "Outfile could not be opened" << std::endl;
		return (1);
	}

	while (std::getline(infile, line))
	{
		line = ft_replace(line, s1, s2);
		outfile << line << std::endl; 
	}

	infile.close();
	outfile.close();

	return (0);
}
