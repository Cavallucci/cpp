#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

class Base
{
	public:
		virtual ~Base(void);
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
