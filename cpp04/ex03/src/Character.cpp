#include "Character.hpp"

Character::Character(void)
{
}
 
Character::~Character(void)
{
}
 
Character::Character(Character const & src)
{
	*this = src;
}
 
Character	&Character::operator=(Character const &rhs)
{
	return (*this);
}
