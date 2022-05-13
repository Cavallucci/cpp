#include "Conversion.hpp"

Conversion::Conversion(char	*a) : 
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
	std::cout << BLUE << "char" << NOC << ":	" << this->_char << std::endl;
	std::cout << BLUE << "int" << NOC << ":	" << this->_int << std::endl;
	std::cout << std::fixed;
	std::cout << BLUE << "float" << NOC << ":	" << std::setprecision(1) << this->_float << "f" << std::endl;
	std::cout << BLUE << "double" << NOC << ":	" << this->_double << std::endl;
}

void	Conversion::transferType(void)
{
	switch (_type)
	{
		case INT:
			this->_char = static_cast<char>(_int);
			this->_float = static_cast<float>(_int);
			this->_double = static_cast<double>(_int);
			break;
		case FLOAT:
			this->_char = static_cast<char>(_float);
			this->_int = static_cast<int>(_float);
			this->_double = static_cast<double>(_float);
			break;
		case DOUBLE:
			this->_char = static_cast<char>(_double);
			this->_int = static_cast<int>(_double);
			this->_float = static_cast<float>(_double);
			break;
		case CHAR:
			this->_double = static_cast<double>(_char);
			this->_int = static_cast<int>(_char);
			this->_float = static_cast<float>(_char);
			break;
		case ERROR:
			break;
	}
}

bool	ft_isdigit(char *a)
{
	int i = 0;
	double d;

	d = atof(a);
	if (std::isinf(d) || std::isnan(d))
		return (true);
	if (a[i] == '-')
		i++;
	while (a[i])
	{
		if (!isdigit(a[i]))
			return (false);
		i++;
	}
	return (true);
}

void	Conversion::checkType(char *a)
{
	int 	i = 0;
	bool 	point = false;
	
	if (ft_isdigit(a) == true)
	{
		while (a[i])
		{
			if (a[i] == '.')
				point = true;	
			i++;
		}
		if (a[i - 1] == 'f')
		{
			this->_float = atof(a);
			this->_type = FLOAT;
		}
		else if (point == true)
		{
			this->_double = atof(a);
			this->_type = DOUBLE;
		}
		else
			this->_int = std::strtol(a, NULL, 0);
	}
	else if (isalpha(a[0]))
		_type = CHAR;
	transferType();
}
