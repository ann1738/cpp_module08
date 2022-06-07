/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:25:28 by ann               #+#    #+#             */
/*   Updated: 2022/06/07 18:21:09 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T & container, int findMe)
{
	return (std::find(container.begin(), container.end(), findMe));
}

/* template function to print container's content (FOR TESTING) */
template <typename T>
void	printContainer(T &container)
{
	for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		std::cout << *i << std::endl;
}

#endif