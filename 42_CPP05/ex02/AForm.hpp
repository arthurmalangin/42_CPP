#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

std::ostream& operator<<(std::ostream &stream, const AForm& obj);

class AForm {
    public:
        /*==== Constructor/Destructor ====*/
        AForm(void);
        AForm(const AForm &obj);
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm &operator=(const AForm &obj);
        virtual ~AForm(void);
        /*==== Getter ====*/
        std::string getName(void) const;
        bool isSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExectue(void) const;
        /*=== Setter ====*/
        void setSigned(void);
        void setSignLvl(int lvl);
        void setExecLvl(int lvl);
        /*==== Exception ====*/
        class GradeTooHighException : public std::exception{
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char *what() const throw();
        };
        class FormNotSignedException : public std::exception{
            virtual const char *what() const throw();
        };
        /*==== Other ====*/
        virtual void beSigned(Bureaucrat &obj);
        virtual void execute(Bureaucrat const & executor) const = 0;
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
};

#endif