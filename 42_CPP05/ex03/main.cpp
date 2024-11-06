#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("random", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error happened: " << e.what() << std::endl;
		}
	}
}