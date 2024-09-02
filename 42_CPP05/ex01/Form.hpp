#ifndef FORM_CPP
#define FORM_CPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const Form& obj);

class Form {
    public:
        /*==== Constructor/Destructor ====*/
        Form(void);
        Form(const Form &obj);
        Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
        Form &operator=(const Form &obj);
        ~Form(void);
        /*==== Getter ====*/
        std::string getName(void) const;
        bool isSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExectue(void) const;\
        /*=== Setter ====*/
        void setSigned(void);
        /*==== Exception ====*/
        class GradeTooHighException : public std::exception{
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char *what() const throw();
        };
        /*==== Other ====*/
        void beSigned(Bureaucrat &obj);
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
};

#endif