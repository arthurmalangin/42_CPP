#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iostream>
#include <exception>

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat(int grade);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat(void);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        class BureaucratException : public std::exception {
            
        };
    protected:
        const std::string _name;
        int _grade;
};

#endif