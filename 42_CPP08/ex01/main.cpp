#include "Span.hpp"
#include <exception>

int main() {
	std::cout << "==================================================================" << std::endl;
	{
		try {
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================================================================" << std::endl;
	{
		try {
			Span sp = Span(5);
			for (size_t i = 0; i < 11000; i++) {
				sp.addNumber(i * 10 / 2);
			}
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================================================================" << std::endl;
	{
		try {
			Span sp = Span(1);
			for (size_t i = 0; i < 11000; i++) {
				sp.addNumber(i * 10 / 2);
			}
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================================================================" << std::endl;
	{
		try {
			Span sp = Span(1);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================================================================" << std::endl;
	{
		try {
			Span sp = Span();
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================================================================" << std::endl;

	return (0);
}