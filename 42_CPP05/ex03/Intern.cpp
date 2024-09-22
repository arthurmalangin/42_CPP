#include "Intern.hpp"

/*==== Constructor/Destructor ====*/
Intern::Intern(void) {
    std::cout << "Default constructor of Intern Call !" << std::endl;
    this->_formCreated = nullptr;
}

Intern::Intern(const Intern &obj) {
    std::cout << "Copy Constructor of Intern Call !" << std::endl;
}

Intern& Intern::operator=(const Intern &obj) {
    std::cout << "Operator of Intern Call !" << std::endl;
}

Intern::~Intern(void) {
    delete this->_formCreated;
}

/*==== Other ====*/
std::string lowerStr(std::string str) {
    std::string lowStr = str;
    for (int i = 0; i < str.length(); i++) {
        lowStr = std::tolower(str[i]);
    }
    return (lowStr);
}

AForm *Intern::makeForm(std::string formName, std::string targetOfForm) {
    std::string wordList[3] = { "shrubbery", "robotomy", "presidential"};
    // Tableau de lambdas pour creer des instances
    AForm* (*tabConstructor[3])(const std::string&) = {
            [](const std::string& target) -> AForm* { return new ShrubberyCreationForm(target); },
            [](const std::string& target) -> AForm* { return new RobotomyRequestForm(target); },
            [](const std::string& target) -> AForm* { return new PresidentialPardonForm(target); }
    };
    for (int i = 0; i < 3; i++) {
        if (lowerStr(formName).find(wordList[i])) {
            this->_formCreated = tabConstructor[i](targetOfForm);
            return (this->_formCreated);
        }
    }
    std::cout << "Error: FormName does not exist" << std::endl;
    return (nullptr);
}