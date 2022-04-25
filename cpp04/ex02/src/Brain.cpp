#include "Brain.hpp"
 
Brain::Brain(void)
{
	std::cout << "constructor brain" << std::endl;
	return ;
}
 
Brain::~Brain(void)
{
	std::cout << "destructor brain" << std::endl;
}
 
Brain::Brain(Brain const & src)
{
	std::cout << "copy constructor brain" << std::endl;
   *this = src;
}
 
Brain &    Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
   return (*this);
}
