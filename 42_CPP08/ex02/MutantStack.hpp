#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(const MutantStack &obj);
		~MutantStack();

		MutantStack &operator=(const MutantStack &obj);
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		typename std::stack<T>::container_type::iterator begin();
		typename std::stack<T>::container_type::iterator end();

	private:

};

#include "MutantStack.tpp"

