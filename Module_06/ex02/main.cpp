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

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate(void)
{
    Base    *ptr = NULL;
    int     valeur = 0;

    srand(time(NULL));
    for (int i = 0; i < 1; i++)
    {
        valeur = rand() %3 + 1;
    }

    if (valeur == 1)
        ptr = new A;
    else if (valeur == 2)
        ptr = new B;
    else if (valeur == 3)
        ptr = new C;

    return (ptr);
}

void	identify(Base* p)
{
    A   *a;
    B   *b;
    C   *c;

    if (p == NULL)
		return ;
    a = dynamic_cast<A *>(p);
    if (a == NULL)
    {
        b = dynamic_cast<B *>(p);
        if (b == NULL)
        {
            c = dynamic_cast<C *>(p);
            if (c == NULL)
                std::cout << "Conversion didn't work" << std::endl;
            else
            {
                std::cout << "C" << std::endl;
                return ;
            }
        }
       std::cout << "B" << std::endl;
       return ;
    }
    std::cout << "A" << std::endl;
    return ;
}

void	identify(Base& p)
{
    Base*	temp = &p;

	if (temp == NULL)
		return ; 
    try
    {
        A& a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (const std::exception& e) { }
  
    try
    {
        B& b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (const std::exception& e) { }
    
    try
    {
        C& c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (const std::exception& e) { }

    return ;
}

int main(void)
{
    Base    *ptr;

    ptr = generate();
 // ptr = NULL;
    std::cout << "True type ptr: ";
    identify(ptr);
    std::cout << "True type ref: ";
    identify(*ptr);

    delete ptr;

    return (0);
}