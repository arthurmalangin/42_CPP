#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default") {
	std::cout << "Default Constructor Call !" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName()) {
	std::cout << "Copy Constructor Call !" << std::endl;
	this->_grade = obj.getGrade();
}

Bureaucrat::Bureaucrat(int grade) : _name("default"){
	std::cout << "Setter Constructor Call !" << std::endl;
	//if (grade > 150)
		//Bureaucrat::GradeTooLowException
	//else if (grade < 1)
		//Bureaucrat::GradeTooHighException
	this->_grade = grade;
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	this->_grade = obj.getGrade();
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor Call !" << std::endl;
}

void Bureaucrat::incrementGrade(void) {
	if (this->_grade > 1)
		_grade--;
	//else
		//throw exception here
}

void Bureaucrat::decrementGrade(void) {
	if (this->_grade < 150)
		_grade++;
	//else
		//throw here
}