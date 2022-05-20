#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T>
void	iter( T	*array, int i, void (*f)(T &array))
{
	int j = -1;

	while (++j < i)
		f(array[j]);
}

template< typename T>
void	increment(T &array)
{
	array++;
}


#endif
