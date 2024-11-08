#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename func>
void iter(T &list, size_t len, func function) {
	for (size_t i = 0; i < len; i++) {
		function(list[i]);
	}
}

template <typename T>
T min(T &a, T &b) {
    return (b > a ? a : b);
}

template <typename T>
T max(T &a, T &b) {
    return (a > b ? a : b);
}

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;

    a = b;
    b = tmp;
}

#endif