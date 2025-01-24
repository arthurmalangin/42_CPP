#include "Span.hpp"

Span::Span() {
	//std::cout << "Default Span constructor call !" << std::endl;
}

Span::Span(unsigned int N) {
	_size = N;
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
	if (_N.size() < _size) {
		std::cout << "add Number: " << nb << " " << std::endl;
		_N.push_back(nb);
	} else {
		std::ostringstream oss;
		oss << "Error Span::addNumber: cannot add " << nb << " No more space !";
		throw std::runtime_error(oss.str());
	}	
}

void Span::addNumbers(std::vector<int> newNb) {
	for (size_t i = 0; i < newNb.size(); i++) {
		if (_N.size() < _size)
			_N.push_back(newNb[i]);
		else {
			std::ostringstream oss;
			oss << "Error Span::addNumber: cannot add " << newNb[i] << " No more space !";
			throw std::runtime_error(oss.str()); 
		}
	}
}

unsigned int Span::shortestSpan() {
	if (_N.size() < 2)
		throw std::runtime_error("Error Span::shortestSpan(), size < 2");
	std::vector<int> tmp = _N;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.begin() + 1) - *tmp.begin());
}

unsigned int Span::longestSpan() {
	if (_N.size() < 2)
		throw std::runtime_error("Error Span::longestSpan(), size < 2");
	std::vector<int> tmp = _N;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

Span &Span::operator=(const Span &obj) {
	_N = obj._N;
	return (*this);
}