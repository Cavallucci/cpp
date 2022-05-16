#include "B.hpp"

B::B(void)
{
}
 
B::~B(void)
{
}
 
B::B(B const & src)
{
	*this = src;
}
 
B	&B::operator=(B const &rhs)
{
	return (*this);
}
