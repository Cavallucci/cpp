#include "A.hpp"

A::A(void)
{
}
 
A::~A(void)
{
}
 
A::A(A const & src)
{
	*this = src;
}
 
A	&A::operator=(A const &rhs)
{
	return (*this);
}
