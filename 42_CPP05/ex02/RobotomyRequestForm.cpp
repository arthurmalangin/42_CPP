#include "RobotomyRequestForm.hpp"

// Include pour le random
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", false, 72, 45){
	std::cout << "Default constructor of RobotomyRequestForm call !" << std::endl;
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj.getName(), obj.isSigned(), 72, 45) {
	std::cout << "Copy constructor of RobotomyRequestForm call !" << std::endl;
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, false, 72, 45) {
	std::cout << "Affectation constructor of RobotomyRequestForm call !" << std::endl;
	std::srand(std::time(0));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	if (obj.isSigned())
		this->setSigned();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "Destructor of ShrubberryCreationForm Call !" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() <= this->getGradeToExectue()) {
			std::cout << "*Some drilling noises* " << std::ends;
			if (std::rand() % 2) {
				std::cout << this->getName() << " You have been robotomized !" << std::endl;
			} else {
				std::cout << this->getName() << " Robotomization fail !" << std::endl;
			}
		}
		else {
            throw Bureaucrat::GradeTooLowException();
		}
	}
	else {
		throw AForm::FormNotSignedException();
	}
}