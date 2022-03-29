/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:55:57 by jnougaro          #+#    #+#             */
/*   Updated: 2022/03/16 17:29:14 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <list>

int main()
{
	{
		std::cout << "\033[33mMy Mutant Stack Example:\033[0m" << std::endl;
		MutantStack<int>	mstack;

		std::cout << std::boolalpha;
		std::cout << mstack.empty() << std::endl;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
	
		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << mstack.empty() << std::endl;
		std::stack<int> s(mstack);
	}

	{
		std::cout << std::endl;
		std::cout << "\033[33mMy Mutant Stack Example with const:\033[0m" << std::endl;
		MutantStack<int>	mstack;

		std::cout << std::boolalpha;
		std::cout << mstack.empty() << std::endl;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
	
		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);

		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << mstack.empty() << std::endl;
		std::stack<int> s(mstack);
	}

	{
		std::cout << std::endl;
		std::cout << "\033[33mList Example:\033[0m" << std::endl;
		std::list< int > list;

		std::cout << std::boolalpha;
		std::cout << list.empty() << std::endl;

		list.push_back(5);
		list.push_back(17);
	
		list.pop_back();

		std::cout << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);

		list.push_back(0);

		std::list< int >::iterator it = list.begin();
		std::list< int >::iterator ite = list.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << list.empty() << std::endl;
		std::list<int> s(list);
	}

	return (0);

}
