#ifndef BTC_TPP
#define BTC_TPP
#include "btc.hpp"

template <typename T>
T stringToType(const std::string &str) {
	std::stringstream ss(str);
	T result;
	ss >> result;
	if (ss.fail() || !ss.eof()) {
		throw std::runtime_error("Invalid conversion: " + str);
	}
	return (result);
}

#endif