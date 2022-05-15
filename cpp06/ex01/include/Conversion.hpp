#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <climits>
#include <string>

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

typedef enum e_type
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
}t_type;

class Conversion
{
	public:
		Conversion(void);
		Conversion(char *a);
		~Conversion(void);
		Conversion(Conversion const & src);

		Conversion		&operator=(Conversion const &rhs);
		void			printValue(void);
		void			checkType(char *a);
		void			transferType(void);
		bool			ft_isdigit(char *a);

	private:
		char			_char;
		long int		_int;
		float			_float;
		double			_double;
		t_type			_type;
		bool			_charImpossible;
		bool			_charNonPrintable;
		bool			_intImpossible;
};
#endif
