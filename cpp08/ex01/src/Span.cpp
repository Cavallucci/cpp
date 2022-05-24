#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Constructor Span" << std::endl;
}
 
Span::~Span(void)
{
	std::cout << "Destructor Span" << std::endl;
}
 
Span::Span(Span const & src)
{
	*this = src;
}
 
Span	&Span::operator=(Span const &rhs)
{
	this->_N = rhs._N;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (_lst.size() < _N)
		_lst.push_back(nb);
	else
		throw AlreadyFullException();
}

void	Span::shortestSpan()
{
	
}

void	Span::longestSpan()
{

}

void	Span::addRange()
{

}
