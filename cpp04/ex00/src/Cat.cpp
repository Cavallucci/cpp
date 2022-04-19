#include "Cat.hpp"
 
Cat::Cat(void) : Animal()
{
	this->_Type = "cat";
	std::cout << "constructor cat" << std::endl;
	return ;
}
 
Cat::~Cat(void)
{
	std::cout << "destructor cat" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal()
{
   *this = src;
   std::cout << "copy constructor cat" << std::endl;
}
 
Cat &    Cat::operator=(Cat const & rhs)
{
	this->_Type = rhs._Type;
   return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "🐱 Miaou..." << std::endl;
}
