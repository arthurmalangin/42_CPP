#include "PmergeMe.hpp"

//vector
int parseArguments(int argc, char* argv[], std::vector<int>& result) {
	result.clear();

	for (int i = 1; i < argc; ++i) {
		char* endptr;
		errno = 0;
		long val = std::strtol(argv[i], &endptr, 10);

		// Check for conversion errors
		if (errno != 0 || *endptr != '\0' || val > 2147483647 || val < -2147483648) {
			std::cerr << "Error: Argument \"" << argv[i] << "\" is not a valid integer." << std::endl;
			return 1;
		}
		result.push_back(static_cast<int>(val));
	}

	return 0;
}

//deque
int parseArguments(int argc, char* argv[], std::deque<int>& result) {
	result.clear();

	for (int i = 1; i < argc; ++i) {
		char* endptr;
		errno = 0;
		long val = std::strtol(argv[i], &endptr, 10);

		// Check for conversion errors
		if (errno != 0 || *endptr != '\0' || val > 2147483647 || val < -2147483648) {
			std::cerr << "Error: Argument \"" << argv[i] << "\" is not a valid integer." << std::endl;
			return 1;
		}

		result.push_back(static_cast<int>(val));
	}

	return 0;
}

int main(int argc, char *argv[]) {
	std::vector<int>	vector_cont;
	std::deque<int>		deque_cont;

	if (argc < 2) {
		std::cout << "Usage : " << argv[0] << " [nb1] <nb2> ..." << std::endl;
		return (1);
	}

	std::cout << "Before : ";
	for (int i = 1; i < argc ; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	//------------------------ vector ----------------------------
	clock_t start = clock();
	if (parseArguments(argc, argv, vector_cont))
		return 1;
	vector_cont = resolve(vector_cont);
	clock_t end = clock();
	double elapsed = double(end - start);

	// Print the generated vector
	std::cout << "After : ";
	for (size_t i = 0; i < vector_cont.size(); ++i) {
		std::cout << vector_cont[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << argc -1 << " elements with std::vector : " << elapsed << "cu (clock unit)" << std::endl;
	//------------------------ deque ----------------------------
	start = clock();
	if (parseArguments(argc, argv, deque_cont))
		return 1;
	deque_cont = resolve(deque_cont);
	end = clock();
	elapsed = double(end - start);
	std::cout << "Time to process a range of " << argc -1 << " elements with std::deque : " << elapsed << "cu" << std::endl;

	return (0);
}
