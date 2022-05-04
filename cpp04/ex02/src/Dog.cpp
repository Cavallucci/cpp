#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	this->_brain = new Brain();
	this->_Type = "dog";
	std::cout << "constructor dog" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "destructor dog" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal()
{
	if (_brain != NULL)
		_brain = new Brain(*src._brain);
	std::cout << "copy constructor dog" << std::endl;
}

Dog &    Dog::operator=(Dog const & rhs)
{
	if (_brain != NULL)
		_brain = new Brain(*rhs._brain);
	this->_Type = rhs._Type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶 Wouaf..." << std::endl;
}
