#include "WrongCat.hpp"
 
WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_Type = "wrong";
	std::cout << "constructor wrong cat" << std::endl;
}
 
WrongCat::~WrongCat(void)
{
	std::cout << "destructor wrong cat" << std::endl;
}
 
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
   *this = src;
   std::cout << "copy constructor wrong cat" << std::endl;
}
 
WrongCat &    WrongCat::operator=(WrongCat const & rhs)
{
	this->_Type = rhs._Type;
   return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "**WRONG CAT SOUND**" << std::endl;
}
