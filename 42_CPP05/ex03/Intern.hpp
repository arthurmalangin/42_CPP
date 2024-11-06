#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        /*==== Constructor/Destructor ====*/
        Intern(void);
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern(void);
        /*==== Other ====*/
        AForm *makeForm(std::string formName, std::string targetOfForm);
    private:
        AForm	*newRobot(Bureaucrat &target);
		AForm	*newPresident(Bureaucrat &target);
		AForm	*newShrubbery(Bureaucrat &target);
};

#endif