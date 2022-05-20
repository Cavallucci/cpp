#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		~Array<T>(void);
		Array<T>(Array<T> const & src);

		unsigned int	size();
		T				getarray();
		Array<T>		&operator=(Array const &rhs);
		T				&operator[](unsigned int n); 

	private:
		T				*_array;
		unsigned int	_n;
};
#endif
