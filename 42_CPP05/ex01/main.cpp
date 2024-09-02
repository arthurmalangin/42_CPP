#include "Bureaucrat.hpp"


int main(void) {
    Bureaucrat polo("Polo", 10);
    std::cout << polo << std::endl;
    Form formulaire("Croco", false, 100, 50);

    Bureaucrat guapo("El Guapo", 5);
    Bureaucrat jordi("Jordi", 150);
    std::cout << formulaire << std::endl;
    jordi.signForm(formulaire);
    
    // formulaire.beSigned(guapo);
    // std::cout << formulaire << std::endl;
    guapo.signForm(formulaire);


    try {
        formulaire.beSigned(jordi);
    } catch (std::exception &e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
    return (0);
}