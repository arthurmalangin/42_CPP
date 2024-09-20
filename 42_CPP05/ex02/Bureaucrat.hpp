#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;
class AForm;

std::ostream& operator<<(std::ostream &stream, const Bureaucrat& obj);

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat(void);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        void signForm(AForm &obj);
    protected:
        const std::string _name;
        int _grade;
};

#endif