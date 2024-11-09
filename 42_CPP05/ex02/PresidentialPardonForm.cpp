#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5){
	std::cout << "Default constructor of PresidentialPardonForm call !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj.getName(), 25, 5) {
	std::cout << "Copy constructor of PresidentialPardonForm call !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {
	std::cout << "Affectation constructor of PresidentialPardonForm call !" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	if (obj.isSigned())
		this->setSigned();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "Destructor of PresidentialPardonForm Call !" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() <= this->getGradeToExectue()) {
            std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
        else {
			throw Bureaucrat::GradeTooLowException();
		}
	}
	else {
		throw AForm::FormNotSignedException();
	}
}