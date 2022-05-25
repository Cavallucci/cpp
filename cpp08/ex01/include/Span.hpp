#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>
#include <climits>

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

class Span
{
	public:
		Span(unsigned int N);
		~Span(void);
		Span(Span const & src);

		Span		&operator=(Span const &rhs);
		void		addNumber(int nb);
		int			shortestSpan();
		int			longestSpan();
		void		addRange(unsigned int nb);

		class AlreadyFullException : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return ("Already full");}
		};

		class NoNumbersStored : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return ("No numbers stored");}
		};

	private:
		unsigned int	_N;
		std::vector<int>	_lst;
};
#endif
