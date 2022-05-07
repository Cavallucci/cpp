#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);

		ShrubberyCreationForm &       operator=(ShrubberyCreationForm const & rhs);
		virtual void				execute(Bureaucrat const &executor) const;
		
		class FailedToOpenException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};
	private:
		std::string	_target;
};
#endif
