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

int	Span::shortestSpan()
{
	std::vector<int>	tmp = _lst;
	std::vector<int>::const_iterator it = tmp.begin();
	int	span = INT_MAX;

	if (tmp.size() > 1)
	{
		std::sort(tmp.begin(), tmp.end());
		while (it != tmp.end() - 1)
		{
			int diff = *it - *(it + 1);
			if (diff < 0)
				diff = -diff;
			if (diff < span)
				span = diff;
			it++;
		}
		return (span);
	}
	throw NoNumbersStored();
}

int	Span::longestSpan()
{
	if (_lst.size() > 1)
	{
		unsigned int max =  *std::max_element(_lst.begin(), _lst.end());
		unsigned int min = *std::min_element(_lst. begin(), _lst.end());
		return (max - min);
	}
	throw NoNumbersStored();
}

void	Span::addRange(unsigned int nb)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < nb; i++)
		this->addNumber(rand() % 1000);
}
