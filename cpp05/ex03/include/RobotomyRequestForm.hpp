#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & src);

		RobotomyRequestForm &       operator=(RobotomyRequestForm const & rhs);
		virtual void				execute(Bureaucrat const &executor) const;

	private:
		std::string	_target;
};
#endif
