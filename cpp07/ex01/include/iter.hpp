#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T>
void	iter( T	*array, int i, void (*f)(T &))
{
	int j = -1;

	while (++j < i)
		f(x[j]);
}


#endif
