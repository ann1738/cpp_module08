/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:46:39 by anasr             #+#    #+#             */
/*   Updated: 2022/06/05 21:43:15 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		// Span	a(20000000);

		// for (int i = -10000000; i < 10000000; ++i)
		// 	a.addNumber(i);
		Span a(1000000);

		// a.addNumber(-5);
		// a.addNumber(-1);
		// a.addNumber(5);
		// a.addNumber(100);
		// a.addNumber(150);
		// a.addNumber(151);
		a.quickAdd(1000000, 0);
		a.fill(a.array.begin(), a.array.end(), 42);
		printContainer(a.array);
		std::cout << a.shortestSpan() << "\e[36m is shortest span\e[0m" << std::endl;
		std::cout << a.longestSpan() << "\e[36m is the longest span\e[0m" << std::endl;
		std::cout << "\e[32mSize of Span object: \e[0m" << a.array.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}