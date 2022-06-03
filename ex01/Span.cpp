#include "Span.hpp"

/****************** Constructors ********************/

Span::Span() : max_size(0)
{
	std::cout << "Span: Default constructor is called\n";
}

Span::Span(unsigned int N) : max_size(N)
{
	std::cout << "Span: Default constructor is called\n";
}

Span::Span(const Span& original)
{
	std::cout << "Span: Copy constructor is called\n";
	array = original.array;
}

Span& Span::operator=(const Span& original)
{
	std::cout << "Span: Copy assignment overloading constructor is called\n";
	if (this != &original)
		array = original.array;
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
	std::vector<int> copy(array);
	std::sort(copy.begin(), copy.end());
	return (copy[1] - copy[0]);
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
