#include "btc.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        try {
            btc exchange;
            exchange.readInput(argv[1]);
        }
        catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
        }
    }
	else {
		std::cerr << "Usage: " << argv[0] << " [filename]" << std::endl;
		return (1);	
	}
	return (0);
}
