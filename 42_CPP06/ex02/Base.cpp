#include "Base.hpp"


Base *generate(void) {
	int nb_rd = rand() % 3;
	if (nb_rd == 0)
		return (new A());
	else if (nb_rd == 1)
		return (new B());
	else
		return (new C());
	//return ((nb_rd == 0) ? new A() : (nb_rd == 1) ? new B() : new C());
}

void identify(Base* p) {
	if (dynamic_cast<Base *>(p)) {
		std::cout << "\033[100mherite/est de type : Base\033[0m" << std::endl;
	}
    if (dynamic_cast<A*>(p)) {
        std::cout << "\033[32mtype : A\033[0m" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "\033[33mtype : B\033[0m" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "\033[31mtype : C\033[0m" << std::endl;
    }
    else {
        std::cout << "\033[31mtype not found\033[0m" << std::endl;
    }
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<Base&>(p);
		std::cout << "\033[100mherite/est de type : Base\033[0m" << std::endl;
	} catch (std::exception &e) {}
    try {
        dynamic_cast<A&>(p);
        std::cout << "\033[32mtype : A\033[0m" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        dynamic_cast<B&>(p);
        std::cout << "\033[33mtype : B\033[0m" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << "\033[31mtype : C\033[0m" << std::endl;
        return;
    } catch (std::exception &e) {}

    std::cout << "type not found" << std::endl;
}