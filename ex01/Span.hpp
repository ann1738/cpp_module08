/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:31:11 by anasr             #+#    #+#             */
/*   Updated: 2022/06/08 09:40:09 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <climits>
#include <vector>
#include <algorithm>


class	Span
{
private:
	unsigned int	max_size;
public:
	std::vector<int>	array;
/******************Constructors********************/
	Span();
	Span(unsigned int N);
	Span(const Span& original);
	Span& operator=(const Span& original);

/******************Destructor********************/
	~Span();

/******************Member Functions********************/
	void	addNumber(int number);
	int		shortestSpan();
	void	quickAdd(int howMany, int value);
	int		longestSpan();
	void	fill(std::vector<int>::iterator begin,
			std::vector<int>::iterator end,
			int start_value,
			int step);
};

/* template function to print container's content (FOR TESTING) */
template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		std::cout << *i << std::endl;
}

#endif
