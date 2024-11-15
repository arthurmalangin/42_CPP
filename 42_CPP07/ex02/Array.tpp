
#include <iostream>
#include "Array.hpp"

template <typename T>
Array<T>::Array() { // on ajoute <T> pour specifier le type de la classe (il pourrais il y'avoir plusieurs version de array, une avec un int et une autre avec un float)
	std::cout << "Array default constructor !" << std::endl;
	this->_array = new T[0]; // == int tableau[0]
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	std::cout << "Array affectation constructor !" << std::endl;
	this->_array = new T[n]; // == int tableau[50] par exemple/alloue 50 cases 
}

template <typename T>
Array<T>::Array(const Array &obj) : _size(obj._size) {
	std::cout << "Array copy constructor !" << std::endl;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++) {
		this->_array[i] = obj._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj) {
	if (this->_array != NULL) // pour eviter les leak
		delete[] this->_array;
	if (obj._size != 0) { // si obj n'est pas une liste vide
		this->_array = new T[obj._size];
		this->_size = obj._size;
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = obj._array[i];
		}
	}
	return (*this);
}

template <typename T>
const char *Array<T>::OutOfBoundException::what(void) const throw(){
	return ("Out Of Bound Exception !");
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
	if (this->_size <= i || this->_array == NULL) {
		throw Array::OutOfBoundException();
	}
	return (this->_array[i]);
}

template <typename T>
Array<T>::~Array() {
	if (this->_array != NULL)
		delete[] this->_array; // Delete tout le tableau entier automatiquement
}

template <typename T>
unsigned int Array<T>::size() const {
	return (this->_size);
}
