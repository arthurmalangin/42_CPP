#include "iter.hpp"

void setMaj(char &c) {
	c = c - 32;
}

int ft_strlen(char *str) {
	for (size_t i = 0; true; i++) {
		if (str[i] == '\0')
			return (i);
	}
}

int main(int argc, char **argv) {
	if (argc < 2)
		return (1);
	::iter(argv[1], ft_strlen(argv[1]), setMaj);
		std::cout << argv[1] << std::endl;
	return (0);
}