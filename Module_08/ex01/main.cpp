/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:55:57 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/16 15:57:44 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout <<"\033[33mSubject example:\033[0m" << std::endl;
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span sp = Span(1);

        sp.addNumber(6);

        std::cout << std::endl;
        std::cout <<"\033[33mExample with distance not found exception:\033[0m" << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span array = Span(10);
        Span copy = Span();

        array.addNumber(6);
        array.addNumber(3);
        array.addNumber(17);
        array.addNumber(9);
        array.addNumber(11);

        copy = array;
        std::cout << std::endl;
        std::cout <<"\033[33mExample with a copy:\033[0m" << std::endl;
        std::cout << "shortest span: " << copy.shortestSpan() << std::endl;
        std::cout << "longest span: " << copy.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::vector< int > vec;
        Span array(10000);
        for (int i = 0; i < 10000; i++)
            vec.push_back(i);
        
        std::random_shuffle(vec.begin(), vec.end());
        array.addNumbers(vec.begin(), vec.end());

        std::cout << std::endl;
        std::cout <<"\033[33mExample with addNumbers function:\033[0m" << std::endl;
        std::cout << "shortest span: " <<  array.shortestSpan() << std::endl;
        std::cout << "longest span: " << array.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
