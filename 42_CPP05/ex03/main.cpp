#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat guapo("Guapo", 1);
    ShrubberyCreationForm form("potato");

    guapo.signForm(form);
    form.execute(guapo);
    return (0);
}