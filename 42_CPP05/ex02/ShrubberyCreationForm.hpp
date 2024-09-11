#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const ShrubberyCreationForm& obj);


/*
-Pourquoi heriter de AForm si les attribus reste en priver ?
-Et donc on doit redefinir les attribus en priver pour chaques enfant de AForm ?
-Mais du coup on doit aussi redefinir les getter et setter ?
-Et si oui quel est l'interet d'un heritage ?
*/

class ShrubberyCreationForm : public AForm{
    public:
        /*==== Constructor/Destructor ====*/
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm(void);
        /*==== Other ====*/
        virtual void execute(Bureaucrat const & executor) const;
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
};

#endif