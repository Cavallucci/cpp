#include "Conversion.hpp"

Conversion::Conversion(std::string a) : 
_char('\0'), _int(0), _float(0), _double(0), _type(INT)
{
	checkType(a);
	std::cout << "Conversion constructor" << std::endl;
}

Conversion::Conversion(void) :
_char('\0'), _int(0), _float(0), _double(0), _type(INT)
{
	std::cout << "Default Conversion constructor" << std::endl;
	return ;
}
 
Conversion::~Conversion(void)
{
	std::cout << "Conversion destructor" << std::endl;
}
 
Conversion::Conversion(Conversion const & src)
{
	std::cout << "Copy Conversion constructor" << std::endl;
	*this = src;
}
 
Conversion	&Conversion::operator=(Conversion const &rhs) 
{
	_char = rhs._char;
	_int = rhs._int;
	_float = rhs._float;
	_double = rhs._double;
	return (*this);
}

void	Conversion::printValue(void)
{
	
}

void	Conversion::checkType(std::string a)
{
	if (isdigit(a[0]))
	{
		
		std::cout << "chiffre" << std::endl;
	}
	std::cout << _type << std::endl;	
	std::cout << a << std::endl;	
}
