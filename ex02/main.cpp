/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:06:38 by ann               #+#    #+#             */
/*   Updated: 2022/06/08 10:49:01 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	{
		std::cout << "\e[35m***************************** Test 1: subject file test *****************************\e[0m\n";
		std::cout << "\e[32m\n***** MutantStack *****\e[0m\n";
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

		std::stack<int> s(mstack);
	}
	std::cout << "\e[32m\n***** std::list *****\e[0m\n";
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
	{
		std::cout << "\n\e[35m***************************** Test 2: more tests with alphabet *****************************\e[0m\n";
		MutantStack<char> myStack;
		myStack.push('a');
		myStack.push('b');
		myStack.push('c');
		myStack.push('d');
		myStack.push('e');
		myStack.push('f');
		myStack.push('g');
		myStack.push('h');
		myStack.push('i');

		std::cout << "\e[32mDisplaying the stack:\e[0m\n";
		for (MutantStack<char>::iterator it = myStack.begin(); it != myStack.end(); ++it)
			std::cout << *it << std::endl;
	
		std::cout << "\e[32mThe top of the list is \e[0m" << myStack.top() << "\n";
		myStack.pop();
		std::cout << "\e[32mAfter removing an element (using pop()), the top of the list is \e[0m" << myStack.top() << "\n";
		std::cout << "\e[33mThe size of the list is \e[0m" << myStack.size() << "\n";
	}
	{
		std::cout << "\n\e[35m***************************** Test 3: copy constructor and copy assignment overloading *****************************\e[0m\n";
		
		std::cout << "\n\e[33m*** constructing an object with 10 integers assigned to 42 ****\e[0m\n";
		MutantStack<int> original;
		for (int i = 0; i < 10; ++i)
			original.push(42);

		std::cout << "\e[33m*** constructing a copy of the previous object and assigning it to 10 ****\e[0m\n";
		MutantStack<int> copy(original);
		for (MutantStack<int>::iterator it = copy.begin(); it != copy.end(); ++it)
			*it = 10;

		std::cout << "\e[33m*** constructing a copy of the previous object (through assignment operator) and assigning it to -10 ****\e[0m\n";
		MutantStack<int> equal;
		equal = original;
		for (MutantStack<int>::iterator it = equal.begin(); it != equal.end(); ++it)
			*it = -10;

		std::cout << "\n\e[34m*** printing the original object ****\e[0m\n";
		for (MutantStack<int>::iterator it = original.begin(); it != original.end(); ++it)
			std::cout << *it << std::endl;
		std::cout << "\e[34m*** printing the copied object ****\e[0m\n";
		for (MutantStack<int>::iterator it = copy.begin(); it != copy.end(); ++it)
			std::cout << *it << std::endl;
		std::cout << "\e[34m*** printing the copied object (through assignment operator) ****\e[0m\n";
		for (MutantStack<int>::iterator it = equal.begin(); it != equal.end(); ++it)
			std::cout << *it << std::endl;
	}
}
