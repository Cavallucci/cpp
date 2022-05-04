#include "WrongAnimal.hpp"
 
WrongAnimal::WrongAnimal(void)
{
	this->_Type = "wrong";
	std::cout << "constructor wrong" << std::endl;
}
 
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "destructor wrong" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_Type);
}
 
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
   *this = src;
   std::cout << "copy constructor wrong" << std::endl;
}
 
WrongAnimal &    WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_Type = rhs._Type;
   return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "**SOUND WRONG ANIMAL**" << std::endl;
}
