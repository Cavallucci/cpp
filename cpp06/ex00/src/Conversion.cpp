#include "Conversion.hpp"

Conversion::Conversion(std::string a) : 
_char('\0'), _int(0), _float(0), _double(0), _type(INT)
{
	std::cout << "Conversion constructor" << std::endl;
	checkType(a);
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
	switch (_type)
	{
		case INT:
			std::cout << "int" << std::endl;
			break;
		case FLOAT:
			std::cout << "float" << std::endl;
			break;
		case DOUBLE:
			std::cout << "double" << std::endl;
			break;
		case CHAR:
			std::cout << "char" << std::endl;
			break;
		case ERROR:
			std::cout << "error" << std::endl;
			break;
	}
}

void	Conversion::checkType(std::string a)
{
	int i = 0;
	
	if (isdigit(a[0]))
	{
		while (a[i])
			i++;
		if (a[i - 1] == 'f')
			this->_type = FLOAT;	
	}
	else if (isalpha(a[0]))
		_type = CHAR;
}
