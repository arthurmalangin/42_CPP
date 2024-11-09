#include "Bureaucrat.hpp"

int main(void) {
	{
	    try {
			Bureaucrat b("b", 149);
			Bureaucrat polo("polo", 10);
			std::cout << polo << std::endl;
			Bureaucrat pablo(polo);
		}
		catch (std::exception &e) {
			std::cerr << "ERROR: " << e.what() << std::endl;
		}
	}
	std::cout << "===================================" << std::endl;
	{
	    try {
			Bureaucrat b("b", 149);
			std::cout << b << std::endl;
			b.decrementGrade();
			b.decrementGrade();
			std::cout << b << std::endl;
			Bureaucrat polo("polo", 10);
			std::cout << polo << std::endl;
			Bureaucrat pablo(polo);
		}
		catch (std::exception &e) {
			std::cerr << "ERROR: " << e.what() << std::endl;
		}
	}
    return (0);
}