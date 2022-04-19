#include "Animal.hpp"
 
Animal::Animal(void)
{
	return ;
}
 
Animal::~Animal(void)
{
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_Type);
}

Animal::Animal(Animal const & src)
{
   *this = src;
}
 
Animal &    Animal::operator=(Animal const & rhs)
{
	this->_Type = rhs._Type;
   return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "animal sound" << std::endl;
}
