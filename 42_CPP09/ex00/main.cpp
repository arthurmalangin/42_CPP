#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: could not open file." << std::endl;
	}
	else {
		BitcoinExchange exchange(argv[1]);
	}
	return (0);
}