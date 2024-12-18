#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
	std::cout << "Default MutantStack constructor call !" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) {
	std::cout << "Copy MutantStack constructor call !" << std::endl;
	*this = obj;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "Destructor MutantStack constructor call !" << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj) {
	std::stack<T>::operator=(obj);
	return (*this);
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end() {
	return (std::stack<T>::c.end()); 
}
