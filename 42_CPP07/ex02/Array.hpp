#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj); // deep copy
		~Array();

		Array &operator=(const Array &obj);
		T &operator[](unsigned int i);

		const T	&operator[](unsigned int i) const;
		unsigned int size() const;
	private:
		T *_array;
		unsigned int _size;

};

#include "Array.tpp"

#endif