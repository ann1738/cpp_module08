/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:28:59 by ann               #+#    #+#             */
/*   Updated: 2022/06/07 18:34:59 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	try
	{
		{
			std::cout << "\e[32m***** TEST 1 (std::vector): the number is in the vector  *****\e[0m\n";
			std::vector<int> array(5, 1);
			int	findMe = 7;
			
			array.push_back(2);
			array.push_back(7);
			array.push_back(9);
			array.push_back(11);

			/* std::find */
			if (std::find(array.begin(), array.end(), findMe) != array.end())
				std::cout << "\e[33mstd::find -> FOUND\e[0m\n";
			else
				std::cout << "\e[33mstd::find -> NOT FOUND\e[0m\n";

			/* easyfind */
			if (easyfind(array, findMe) != array.end())
			{
				std::cout << "\e[32measyfind -> FOUND\e[0m\n";
				array.insert(easyfind(array, findMe), 100);
			}
			else
				std::cout << "\e[31measyfind -> NOT FOUND\e[0m\n";
			
			std::cout << "\e[34mThe number we're trying to find: " << findMe << "\e[0m\n";

			/* print array */
			std::cout << "\e[36mThis is the array:\e[0m\n";
			printContainer(array);
		}
		{
			std::cout << "\n\e[32m***** TEST 2 (std::vector): the number is not in the vector  *****\e[0m\n";
			std::vector<int> array;
			int	findMe = 1000;
		
			array.push_back(0);
			array.push_back(10);
			array.push_back(20);
			array.push_back(30);
			array.push_back(40);
			array.push_back(50);
			array.push_back(60);
			array.push_back(70);
			array.push_back(80);
			array.push_back(90);
			array.push_back(100);

			/* std::find */
			if (std::find(array.begin(), array.end(), findMe) != array.end())
				std::cout << "\e[33mstd::find -> FOUND\e[0m\n";
			else
				std::cout << "\e[33mstd::find -> NOT FOUND\e[0m\n";
			
			/* easyfind */
			if (easyfind(array, findMe) != array.end())
			{
				std::cout << "\e[32measyfind -> FOUND\e[0m\n";
				array.insert(easyfind(array, findMe), 42);
			}
			else
				std::cout << "\e[31measyfind -> NOT FOUND\e[0m\n";

			std::cout << "\e[34mThe number we're trying to find: " << findMe << "\e[0m\n";

			/* print array */
			std::cout << "\e[36mThis is the array:\e[0m\n";
			printContainer(array);
		}
		{
			std::cout << "\n\e[32m***** TEST 3 (std::list): the number is in the list *****\e[0m\n";
			std::list<int> myList(5, 42);
			int	findMe = 42;
			
			myList.push_front(24);
			myList.push_back(24);
			
			/* std::find */
			if (std::find(myList.begin(), myList.end(), findMe) != myList.end())
				std::cout << "\e[33mstd::find -> FOUND\e[0m\n";
			else
				std::cout << "\e[33mstd::find -> NOT FOUND\e[0m\n";
			
			/* easyfind */
			if (easyfind(myList, findMe) != myList.end())
				std::cout << "\e[32measyfind -> FOUND\e[0m\n";
			else
				std::cout << "\e[31measyfind -> NOT FOUND\e[0m\n";
			
			std::cout << "\e[34mThe number we're trying to find: " << findMe << "\e[0m\n";

			/* print array */
			std::cout << "\e[36mThis is the array:\e[0m\n";
			printContainer(myList);
		}
		{
			std::cout << "\n\e[32m***** TEST 4 (std::list): the number is not in the list *****\e[0m\n";
			std::list<int> myList;
			int	findMe = -1;

			myList.push_back(1);
			myList.push_back(2);
			myList.push_back(4);
			myList.push_back(8);
			myList.push_back(16);
			myList.push_back(32);
			myList.push_back(64);
			myList.push_back(128);
			myList.push_back(256);
			
			/* std::find */
			if (std::find(myList.begin(), myList.end(), findMe) != myList.end())
				std::cout << "\e[33mstd::find -> FOUND\e[0m\n";
			else
				std::cout << "\e[33mstd::find -> NOT FOUND\e[0m\n";
			
			/* easyfind */
			if (easyfind(myList, findMe) != myList.end())
				std::cout << "\e[32measyfind -> FOUND\e[0m\n";
			else
				std::cout << "\e[31measyfind -> NOT FOUND\e[0m\n";

			std::cout << "\e[34mThe number we're trying to find: " << findMe << "\e[0m\n";

			/* print array */
			std::cout << "\e[36mThis is the array:\e[0m\n";
			printContainer(myList);
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
