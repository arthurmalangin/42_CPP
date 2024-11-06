#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const ShrubberyCreationForm& obj);

class ShrubberyCreationForm : public AForm{
    public:
        /*==== Constructor/Destructor ====*/
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm(void);
        /*==== Other ====*/
        void execute(Bureaucrat const & executor) const;
};

#endif