/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:31:11 by anasr             #+#    #+#             */
/*   Updated: 2022/06/03 15:03:31 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
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
	int		longestSpan();
	void		fill(std::vector<int>::iterator begin,
				std::vector<int>::iterator end,
				int start_value,
				int step = 0);
};

/* template function to print container's content (FOR TESTING) */
template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		std::cout << *i << std::endl;
}

#endif