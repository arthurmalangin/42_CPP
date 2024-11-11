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
		unsigned int shortestSpan();
		unsigned int longestSpan();
		Span &operator=(const Span &obj);
	private:
		std::vector<unsigned int> _N; // ??
};

#endif