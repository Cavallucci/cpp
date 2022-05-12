#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cctype>

typedef enum e_type
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	ERROR
}t_type;

class Conversion
{
	public:
		Conversion(void);
		Conversion(std::string a);
		~Conversion(void);
		Conversion(Conversion const & src);

		Conversion		&operator=(Conversion const &rhs);
		void			printValue(void);
		void			checkType(std::string a);

	private:
		char	_char;
		int		_int;
		float	_float;
		double	_double;
		t_type	_type;
};
#endif
