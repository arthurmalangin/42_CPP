#include "AForm.hpp"

/*==== Constructor/Destructor ====*/

AForm::AForm(void) : _name("Default AForm"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << "Default AForm constructor call !" << std::endl;
}

AForm::AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute) : _name(name),  _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
    std::cout << "Affectation AForm constructor call !" << std::endl;
    _signed = isSigned;
}

AForm::AForm(const AForm &obj) : _name(obj.getName()), _signed(false), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExectue()){
    std::cout << "Copy Constructor AForm Call !" << std::endl;
}

AForm::~AForm(void) {

}

/*==== Operator Overloading ====*/

AForm &AForm::operator=(const AForm &obj)  {
    this->_signed = obj._signed;
    return (*this);
}

std::ostream& operator<<(std::ostream &stream, const AForm& obj)
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

std::string AForm::getName(void) const{
    return (this->_name);
}

bool AForm::isSigned(void) const {
    return (this->_signed);
}

int AForm::getGradeToSign(void) const {
    return (this->_gradeToSign);
}

int AForm::getGradeToExectue(void) const {
    return (this->_gradeToExecute);
}

/*==== Setter ====*/

void AForm::setSigned(void) {
    this->_signed = true;
}

/*==== Exception ====*/

const char *AForm::GradeTooHighException::what() const throw() {
    return ("AForm Grade Too High Exception");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("AForm Grade Too Low Exception");
}

const char *AForm::FormNotSignedException::what() const throw() {
    return ("Form is not signed !");
}

/*==== Other ====*/

void AForm::beSigned(Bureaucrat &obj) {
    if (obj.getGrade() <= this->_gradeToSign) {
        this->_signed = true;
    } else {
        throw AForm::GradeTooLowException();
    }
}