#include "Form.hpp"

/*==== Constructor/Destructor ====*/

Form::Form(void) : _name("Default Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << "Default Form constructor call !" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false),  _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
    std::cout << "Affectation Form constructor call !" << std::endl;
}

Form::Form(const Form &obj) : _name(obj.getName()), _signed(obj._signed), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExectue()){
    std::cout << "Copy Constructor Form Call !" << std::endl;
}

Form::~Form(void) {

}

/*==== Operator Overloading ====*/

Form &Form::operator=(const Form &obj)  {
    this->_signed = obj._signed;
    return (*this);
}

std::ostream& operator<<(std::ostream &stream, const Form& obj)
{
    stream << "=======================================" << std::endl;
    stream << "Name: " << obj.getName() << std::endl;
    stream << "Is Signed ? " << (obj.isSigned() ? "Yes" : "No") << std::endl;
    stream << "Grade To Sign: " << obj.getGradeToSign() << std::endl;
    stream << "Grade To Execute: " << obj.getGradeToExectue() << std::endl;
    stream << "=======================================" << std::endl;
    return stream;
}

/*==== Getter ====*/

std::string Form::getName(void) const{
    return (this->_name);
}

bool Form::isSigned(void) const {
    return (this->_signed);
}

int Form::getGradeToSign(void) const {
    return (this->_gradeToSign);
}

int Form::getGradeToExectue(void) const {
    return (this->_gradeToExecute);
}

/*==== Setter ====*/

void Form::setSigned(void) {
    this->_signed = true;
}

/*==== Exception ====*/

const char *Form::GradeTooHighException::what() const throw() {
    return ("Form Grade Too High Exception");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Form Grade Too Low Exception");
}

/*==== Other ====*/

void Form::beSigned(Bureaucrat &obj) {
    if (obj.getGrade() <= this->_gradeToSign) {
        this->_signed = true;
    } else {
        throw Form::GradeTooLowException();
    }
}