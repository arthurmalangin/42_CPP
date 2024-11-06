#include "Intern.hpp"

/*==== Constructor/Destructor ====*/
Intern::Intern(void) {
    std::cout << "Default constructor of Intern Call !" << std::endl;
}

Intern::Intern(const Intern &obj) {
    *this = obj;
    std::cout << "Copy Constructor of Intern Call !" << std::endl;
}

Intern& Intern::operator=(const Intern &obj) {
    (void)obj;
    std::cout << "Operator of Intern Call !" << std::endl;
    return (*this);
}

Intern::~Intern(void) {
}

/*==== Other ====*/
AForm	*Intern::newRobot(Bureaucrat &target)
{
	return (new RobotomyRequestForm(target.getName()));
}

AForm	*Intern::newPresident(Bureaucrat &target)
{
	return (new PresidentialPardonForm(target.getName()));
}

AForm	*Intern::newShrubbery(Bureaucrat &target)
{
	return (new ShrubberyCreationForm(target.getName()));
}

AForm	*Intern::makeForm(std::string formName, std::string targetName)
{
	std::string	formType[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm		*(Intern::*func[3])(Bureaucrat &target) = {&Intern::newRobot, &Intern::newPresident, &Intern::newShrubbery};

	Bureaucrat	*target = new Bureaucrat(targetName, 150);
	AForm		*form = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (formType[i] == formName)
			form = (this->*func[i])(*target);
	}
	delete target;
	if (!form)
		throw std::exception();
	return (form);
}