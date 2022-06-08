/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:46:39 by anasr             #+#    #+#             */
/*   Updated: 2022/06/08 10:25:37 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "\e[35m***** Test 1: subject file test *****\e[0m\n";
		try
		{
			Span sp = Span(5);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 2: 10,000 numbers of same value *****\e[0m\n";
		try
		{
			Span	a(10000);

			a.quickAdd(10000, 0);
			// printContainer(a.array);
			std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
			std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 3: 100,000 numbers of values that increment by 1 *****\e[0m\n";
		try
		{
			Span	a(100000);

			a.quickAdd(100000, 0);
			a.fill(a.array.begin(), a.array.end(), -50000, 1);
			// printContainer(a.array);
			std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
			std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 3: 100,000 numbers of values that increment by 5 *****\e[0m\n";
		try
		{
			Span	a(100000);

			a.quickAdd(100000, 0);
			a.fill(a.array.begin(), a.array.end(), -50000, 5);
			// printContainer(a.array);
			std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
			std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 4: adding a number after the maximum capacity is reached *****\e[0m\n";
		try
		{
			Span	a(10);

			a.quickAdd(11, 0);
			std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
			std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 5: attempting to get the shortest span with no integers stored in Span object *****\e[0m\n";
		try
		{
			Span	a(10);

			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
			std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[35m***** Test 6: attempting to get the longest span with no integers stored in Span object *****\e[0m\n";
		try
		{
			Span	a(10);

			std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
			std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\n\e[32m********** END OF TESTS **********\e[0m\n";
}
