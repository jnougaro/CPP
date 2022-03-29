/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:55:57 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/15 14:55:58 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    try
    {
        std::list< int > lst;

        lst.push_back(10);
        lst.push_back(5);
        lst.push_back(4);
        lst.push_back(3);

        std::cout << "\033[33mException example with list:\033[0m" << std::endl;
        std::cout << easyfind(lst, 6)<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::list< int > lst;

        lst.push_back(10);
        lst.push_back(5);
        lst.push_back(4);
        lst.push_back(20);

        std::cout << std::endl;
        std::cout << "\033[33mOccurence found example with list:\033[0m" << std::endl;
        std::cout << easyfind(lst, 10)<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::vector< int >  vec;

        for (int i = 0; i < 5; i++)
            vec.push_back(i);
        std::cout << std::endl;
        std::cout << "\033[33mException example with vector:\033[0m" << std::endl;
        std::cout << easyfind(vec, 6)<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::vector< int >  vec;

        for (int i = 0; i < 5; i++)
            vec.push_back(i);
        std::cout << std::endl;
        std::cout << "\033[33mOccurence found example with vector:\033[0m" << std::endl;
        std::cout << easyfind(vec, 4)<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
