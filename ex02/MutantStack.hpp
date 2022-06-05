#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
// #include <iterator>
#include <deque>

template <typename T>
class	MutantStack : public std::stack<T>
{
	// using std::stack<T>::c;
public:
/******************Constructors********************/
	MutantStack(): std::stack<int>()
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
	typedef std::_Deque_iterator<T, const T&, const T*> iterator;

	iterator begin() const
	{
		return std::stack<T>::c.begin();
	}

	iterator end() const
	{
		return std::stack<T>::c.end();
	}
};

#endif
