#include "PresidentialPardonForm.hpp"

// Include pour le random
#include <cstdlib>
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", false, 25, 5), _target("Default"){
	std::cout << "Default constructor of PresidentialPardonForm call !" << std::endl;
	std::srand(std::time(0));
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj.getName(), obj.isSigned(), 25, 5), _target(obj._target) {
	std::cout << "Copy constructor of PresidentialPardonForm call !" << std::endl;
	std::srand(std::time(0));
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), _target(target) {
	std::cout << "Affectation constructor of PresidentialPardonForm call !" << std::endl;
	std::srand(std::time(0));
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	if (obj.isSigned())
		this->setSigned();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "Destructor of ShrubberryCreationForm Call !" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() <= this->getGradeToExectue()) {
            std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
        else
            std::cout << "Throw grade to execute too low" << std::endl;
	}
	else {
		std::cout << "Trow not signed Exception" << std::endl;
		//Todo throw real exception
	}
}