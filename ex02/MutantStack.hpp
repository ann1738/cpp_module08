#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:
/******************Constructors********************/
	MutantStack(): std::stack<T>()
	{
		std::cout << "MutantStack: Default constructor is called\n";
	}

	MutantStack(const MutantStack& original): std::stack<T>(original)
	{
		std::cout << "MutantStack: Copy constructor is called\n";
	}

	MutantStack& operator=(const MutantStack& original)
	{
		std::cout << "MutantStack: Copy assignment overloading constructor is called\n";
		if (this != &original)
			std::stack<T>::operator=(original);
		return (*this);
	}

/******************Destructor********************/
	~MutantStack()
	{
		std::cout << "MutantStack: Destructor is called\n";
	}

/******************Iterators********************/
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}

	const_iterator begin() const
	{
		return std::stack<T>::c.begin();
	}

	const_iterator end() const
	{
		return std::stack<T>::c.end();
	}
};

#endif
