#include "Cat.hpp"
#include "Brain.hpp"
 
Cat::Cat(void) : Animal()
{
	this->_brain = new Brain();
	this->_Type = "cat";
	std::cout << "constructor cat" << std::endl;
	return ;
}
 
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "destructor cat" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal()
{
	if (_brain != NULL)
		_brain = new Brain(*src._brain);
	std::cout << "copy constructor cat" << std::endl;
}
 
Cat &    Cat::operator=(Cat const & rhs)
{
	if (_brain != NULL)
		_brain = new Brain(*rhs._brain);
	this->_Type = rhs._Type;
   return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "🐱 Miaou..." << std::endl;
}
