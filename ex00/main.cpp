/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:28:59 by ann               #+#    #+#             */
/*   Updated: 2022/06/03 12:34:15 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>

#include <algorithm>

#define FINDME 7

int main()
{
	try
	{
		{
			std::cout << "****************************************************\n";
			std::vector<int> array(5, 1);
			array.push_back(2);
			array.push_back(7);
			array.push_back(9);
			array.push_back(11);
			if ( std::find(array.begin(), array.end(), FINDME) != array.end())
				std::cout << "std::find -> FOUND\n";
			else
				std::cout << "std::find -> NOT FOUND\n";
			
			if (easyfind(array, FINDME) != array.end())
			{
				std::cout << "easyfind -> FOUND\n";
				array.insert(easyfind(array, FINDME), 42);
			}
			else
				std::cout << "easyfind -> NOT FOUND\n";
			printContainer(array);
		}
		{
			std::cout << "****************************************************\n";
			std::list<int> myList(5, 42);
			int	findMe = 24;
			
			myList.push_front(24);
			myList.push_back(24);
			printContainer(myList);
			if (easyfind(myList, findMe) != myList.end())
				std::cout << "easyfind -> FOUND\n";
			else
				std::cout << "easyfind -> NOT FOUND\n";
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
