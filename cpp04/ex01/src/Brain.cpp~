#include "Brain.hpp"
 
Brain::Brain(void)
{
}
 
Brain::~Brain(void)
{
}
 
Brain::Brain(Brain const & src)
{
   *this = src;
}
 
Brain &    Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
   return (*this);
}
