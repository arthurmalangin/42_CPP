#include "Span.hpp"

Span::Span() {
	//std::cout << "Default Span constructor call !" << std::endl;
}

Span::Span(unsigned int N) {
	_N.push_back(N);
	//std::cout << "Affectation Span constructor call !" << std::endl;
}

Span::Span(const Span &obj) {
	//std::cout << "Copy Constructor call !" << std::endl;
	_N = obj._N;
}

Span::~Span() {
	//std::cout << "Destructor call !" << std::endl;
}

void Span::addNumber(unsigned int nb) {
	for (size_t i = 0; i < _N.size(); i++) {
		if (_N[i] == nb) {
			std::ostringstream oss;
			oss << "Error Span::addNumber: cannot add " << nb << " !";
			throw std::runtime_error(oss.str());
		}
	}
	_N.push_back(nb);
}

unsigned int Span::shortestSpan() {
	if (_N.size() < 2)
		throw std::runtime_error("Error Span::shortestSpan(), size < 2");
	std::vector<unsigned int> tmp = _N;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.begin() + 1) - *tmp.begin());
}

unsigned int Span::longestSpan() {
	if (_N.size() < 2)
		throw std::runtime_error("Error Span::longestSpan(), size < 2");
	std::vector<unsigned int> tmp = _N;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

Span &Span::operator=(const Span &obj) {
	_N = obj._N;
	return (*this);
}