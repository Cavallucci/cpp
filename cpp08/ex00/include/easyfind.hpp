#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

class NotFoundException : public std::exception
{
	public :
		virtual const char *what() const throw(){
			return ("Value not found");}
};

template< typename T>
void	easyfind(T &container, int nb)
{
	typename T::const_iterator	it = std::find(container.begin(), container.end(), nb);
	
	if (it == container.end())
		throw NotFoundException();
	std::cout << GREEN << "Value = " << *it << NOC << std::endl;
}

#endif
