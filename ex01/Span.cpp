/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:10:20 by ann               #+#    #+#             */
/*   Updated: 2022/06/08 10:16:15 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/****************** Constructors ********************/

Span::Span() : max_size(0)
{
	std::cout << "Span: Default constructor is called\n";
}

Span::Span(unsigned int N) : max_size(N)
{
	std::cout << "Span: Custom constructor is called\n";
}

Span::Span(const Span& original)
{
	std::cout << "Span: Copy constructor is called\n";
	array = original.array;
	max_size = original.max_size;
}

Span& Span::operator=(const Span& original)
{
	std::cout << "Span: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		array = original.array;
		max_size = original.max_size;
	}
	return (*this);
}

/******************* Destructor *********************/

Span::~Span()
{
	std::cout << "Span: Destructor is called\n";
}

/***************** Member Functions *****************/

void	Span::addNumber(int number)
{
	if (array.size() >= max_size)
		throw std::length_error("\e[31mError: adding numbers beyond the Span's max size\e[0m");
	array.push_back(number);
}

int		Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("\e[31mError: unable to determine the shortest span with less than 2 numbers in the Span object\e[0m");
	int	shortest = INT_MAX;
	std::vector<int> copy(array);
	std::sort(copy.begin(), copy.end());
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end() - 1; ++it) if (abs(*it - *(it + 1)) < shortest) {shortest = abs(*it - *(it + 1));};
	return (shortest);
}

int		Span::longestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("\e[31mError: unable to determine the longest span with less than 2 numbers in the Span object\e[0m");
	return (*max_element(array.begin(), array.end()) - *min_element(array.begin(), array.end()));
}

void	Span::fill(std::vector<int>::iterator begin,
					std::vector<int>::iterator end,
					int value, int step)
{
	if (step == 0)
		std::fill(begin, end, value);
	else
	{
		for (std::vector<int>::iterator i = array.begin(); i != array.end(); ++i)
		{
			*i = value;
			value += step;
		}
	}
}

void	Span::quickAdd(int howMany, int value)
{
	for (int i = 0; i < howMany; ++i) addNumber(value);
}
