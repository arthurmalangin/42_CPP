#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main()
{
	{
		try
		{
			std::cout << "Testing with Julien 10" << std::endl;
			Bureaucrat	Julien_sign("Julien", 10);

			PresidentialPardonForm	preForm(Julien_sign.getName());
			RobotomyRequestForm		robotForm(Julien_sign.getName());
			ShrubberyCreationForm	shrubberyForm(Julien_sign.getName());
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 7);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Testing with Julien 0" << std::endl;
			Bureaucrat	Julien_sign("Julien", 0);

			PresidentialPardonForm	preForm(Julien_sign.getName());
			RobotomyRequestForm		robotForm(Julien_sign.getName());
			ShrubberyCreationForm	shrubberyForm(Julien_sign.getName());
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 5489);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Testing with Julien 150" << std::endl;
			Bureaucrat	Julien_sign("Julien", 150);

			PresidentialPardonForm	preForm(Julien_sign.getName());
			RobotomyRequestForm		robotForm(Julien_sign.getName());
			ShrubberyCreationForm	shrubberyForm(Julien_sign.getName());
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 2);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}