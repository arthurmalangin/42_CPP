#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		~Span();
		void addNumber(unsigned int nb);
		void addNumbers(std::vector<int> newNb);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		Span &operator=(const Span &obj);
	private:
		unsigned int _size;
		std::vector<int> _N; // ??
};

#endif