#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & src);

		PresidentialPardonForm &       operator=(PresidentialPardonForm const & rhs);
		virtual void				execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};
#endif
