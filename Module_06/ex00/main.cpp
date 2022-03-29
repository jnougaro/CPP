/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:09:27 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/10 15:09:47 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
    Conversion *converter;

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }

    try { converter = new Conversion(argv[1]); }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }

    try
    {
        char c;
        std::cout << "char: ";
        c = converter->toChar();
        std::cout << "'" << c << "'" << std::endl; 
    }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

    try { std::cout << "int: " << converter->toInt() << std::endl; }
    catch (const std::exception& e) { std::cerr << e.what() << '\n'; }

    try { std::cout << "float: " << converter->toFloat() << "f" << std::endl; }
    catch (const std::exception& e) { std::cerr << e.what() << '\n'; }

    try { std::cout << "double: " << converter->toDouble() << std::endl; }
    catch (const std::exception& e) { std::cerr << e.what() << '\n'; }
    
    delete converter;

    return (0);

}
