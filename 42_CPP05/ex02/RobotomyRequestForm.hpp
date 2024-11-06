#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const RobotomyRequestForm& obj);

class RobotomyRequestForm : public AForm{
    public:
        /*==== Constructor/Destructor ====*/
        RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm(void);
        /*==== Other ====*/
        void execute(Bureaucrat const & executor) const;
};

#endif