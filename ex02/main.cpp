/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:06:38 by ann               #+#    #+#             */
/*   Updated: 2022/06/05 21:54:50 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
# if 0
	// std::vector<int> i;
	// std::vector<int>::iterator it = i.begin();
	// std::stack<int> stak;
	// stak.push(49832);
	// stak.push(4983);
	// stak.push(498);
	// stak.push(49);
	// stak.push(4);

	// while (!stak.empty())
	// {
	// 	std::cout << stak.top() << std::endl;
	// 	stak.pop();
	// }
	// for (int i = 0; i < stak.size(); ++i) std::cout << return_this_stack_num(stak, i) << std::endl; 

	MutantStack<int> haha;

	haha.push(49832);
	haha.push(4983);
	haha.push(498);
	haha.push(49);
	haha.push(4);


	MutantStack<int>::iterator it =  haha.begin();
	for(; it != haha.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "hey\n";
#endif

#if 1
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top will appear next line\n";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size will appear next line\n";
		std::cout << mstack.size() << std::endl;
		std::cout << "done from size \n";
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
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

		// std::cout << "COPY CONSTRUCTOR ----------------------------\n";
		// MutantStack<int> copy(mstack);
		// for (MutantStack<int>::iterator it = copy.begin(); it != copy.end(); ++it)
		// 	std::cout << *it << std::endl;
		
		std::stack<int> s(mstack);
	}
	std::cout << "*****************************std::list*****************************\n";
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "top will appear next line\n";
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "size will appear next line\n";
		std::cout << mstack.size() << std::endl;
		std::cout << "done from size \n";
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}
#endif
}
