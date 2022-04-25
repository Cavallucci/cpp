#include "Animal.hpp"
 
Animal::Animal(void)
{
	std::cout << "Constructor Animal" << std::endl;
	return ;
}
 
Animal::~Animal(void)
{
	std::cout << "Destructor Animal" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_Type);
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy Animal" << std::endl;
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
