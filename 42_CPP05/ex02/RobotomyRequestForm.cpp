#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", false, 72, 45), _target("Default"){
    std::cout << "Default constructor of RobotomyRequestForm call !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj.getName(), obj.isSigned(), 72, 45), _target(obj._target) {
    std::cout << "Copy constructor of RobotomyRequestForm call !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), _target(target) {
    std::cout << "Affectation constructor of RobotomyRequestForm call !" << std::endl;
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
            std::cout << "*Some drilling noises*" << std::ends;
            //Faire du random avec 50% de chance
            /*
            if nb == 1
                print <target> You have been robotomized
            else
                print <target> Robotomization fail*/
        }
    }
    else {
        std::cout << "Trow not signed Exception" << std::endl;
        //Todo throw real exception
    }
}