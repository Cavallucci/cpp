#include "Dog.hpp"
 
Dog::Dog(void) : Animal()
{
	this->_Type = "dog";
	std::cout << "constructor dog" << std::endl;
	return ;
}
 
Dog::~Dog(void)
{
   	std::cout << "destructor dog" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal()
{
   *this = src;
   	std::cout << "copy constructor dog" << std::endl;
}
 
Dog &    Dog::operator=(Dog const & rhs)
{
	this->_Type = rhs._Type;
   return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶 Wouaf..." << std::endl;
}
