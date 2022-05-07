#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const & src);

		Intern		&operator=(Intern const &rhs);
		AForm*		makeForm(std::string name, std::string target);
	
	private:
		AForm	*_Robotomy(std::string target);
		AForm	*_Presidential(std::string target);
		AForm	*_Shrubbery(std::string target);
};
#endif
