/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:25:28 by ann               #+#    #+#             */
/*   Updated: 2022/06/03 12:19:33 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T & container, int findMe)
{
	typename T::iterator i;
	for (i = container.begin(); i != container.end(); ++i)
		if (*i == findMe) return (i);
	return (i);
}

/* template function to print container's content (FOR TESTING) */
template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		std::cout << *i << std::endl;
}

#endif