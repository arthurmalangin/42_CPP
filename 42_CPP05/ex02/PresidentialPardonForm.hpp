#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const PresidentialPardonForm& obj);

class PresidentialPardonForm : public AForm {
    public:
        /*==== Constructor/Destructor ====*/
        PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm(void);
        /*==== Other ====*/
        void execute(Bureaucrat const & executor) const;
};

#endif