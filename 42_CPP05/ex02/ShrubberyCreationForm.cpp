#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", false, 145, 137), _target("Default"){
    std::cout << "Default constructor of ShrubberyCreationForm call !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj.getName(), obj.isSigned(), 145, 137), _target(obj._target) {
    std::cout << "Copy constructor of ShrubberyCreationForm call !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(target) {
    std::cout << "Affectation constructor of ShrubberyCreationForm call !" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
    if (obj.isSigned())
        this->setSigned();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "Destructor of ShrubberryCreationForm Call !" << std::endl;
}

std::string generateAsciiTree(void) {
    std::string ascii;

    ascii = "               ,@@@@@@@,\n";
    ascii += "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
    ascii += "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
    ascii += "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88\'\n";
    ascii += "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888\'\n";
    ascii += "   %&&%/ %&%%&&@@\\ V /@@\' `88\\8 `/88\'\n";
    ascii += "   `&%\\ ` /%&\'    |.|        \\ \'|8\'\n";
    ascii += "       |o|        | |         | |\n";
    ascii += "       |.|        | |         | |\n";
    ascii += "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
    return (ascii);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (this->isSigned()) {
        if (executor.getGrade() <= this->getGradeToExectue()) {
            std::string fileName = this->_target + "_shrubbery";
            std::ofstream output(fileName.c_str());
            if (output.is_open()) {//Verif if file is created
                output << generateAsciiTree();
                output.close(); //No forget to close
            }
        }
    }
    else {
        std::cout << "Trow not signed Exception" << std::endl;
        //Todo throw real exception
    }
}