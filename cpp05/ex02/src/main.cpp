#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat test1("Guy", 1);
	Bureaucrat test2("Jose", 35);
	Bureaucrat test3("Laura", 149);

	AForm      *form1 = new PresidentialPardonForm("mauve");
	AForm      *form2 = new ShrubberyCreationForm("sperer");
	AForm      *form3 = new RobotomyRequestForm("pas");

	std::cout << std::endl << "[ --TRY TO SIGN SUCESSFULLY-- ]" << std::endl;
	test1.signForm(*form1);

	std::cout << std::endl << "[ --TRY TO EXECUTE SUCCESSFULLY-- ]" << std::endl;
	test1.executeForm(*form1);

	std::cout << std::endl << "[ -- SIGN UNSUCCESSFULLY BECAUSE NOT ALLOWED-- ]" << std::endl;
	test3.signForm(*form2);

	std::cout << std::endl << "[ --SIGN + TEST ROBOT-- ]" << std::endl;
	test2.signForm(*form3);
	std::cout << std::endl;
	form3->execute(test2);
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
}
