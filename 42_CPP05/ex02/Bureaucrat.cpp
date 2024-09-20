#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default") {
	std::cout << "Default Constructor Call !" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName()) {
	std::cout << "Copy Constructor Call !" << std::endl;			
	this->_grade = obj.getGrade();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout << "Setter Constructor Call !" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("Grade Too High !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("Grade Too Low");
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	this->_grade = obj.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor Call !" << std::endl;
}

void Bureaucrat::incrementGrade(void) {
	if (this->_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void) {
	if (this->_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat& obj)
{
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return stream;
}

void Bureaucrat::signForm(AForm &obj) {
	if (this->getGrade() <= obj.getGradeToSign()) {
        obj.setSigned();
		std::cout << this->_name << " Signed " << std::endl << obj;
    } else {
        std::cout << this->_name << " couldn't sign  " << std::endl << obj << "Because his grade is too low." << std::endl;
    }
}