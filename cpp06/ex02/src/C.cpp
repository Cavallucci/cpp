#include "C.hpp"

C::C(void)
{
}
 
C::~C(void)
{
}
 
C::C(C const & src)
{
	*this = src;
}
 
C	&C::operator=(C const &rhs)
{
	return (*this);
}
