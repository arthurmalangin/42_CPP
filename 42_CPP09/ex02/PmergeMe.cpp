#include "PmergeMe.hpp"

int jacobsthal(unsigned int n) {
	if(n <= 1)
		return 2;
	else
		return (jacobsthal(n-1) + 2 * jacobsthal(n-2));
}

//////////////////////////////////////////////////////////////////
//								VECTOR							//
//////////////////////////////////////////////////////////////////

void dichotomyInsert(std::vector<int>& dest, const std::vector<int>& src)  {
	for (size_t i = 0; i < src.size(); ++i) {
		std::vector<int>::iterator pos = std::lower_bound(dest.begin(), dest.end(), src[i]);
		dest.insert(pos, src[i]);
	}
}

std::vector<int> getAndRemoveFirstN(std::vector<int>& vec, size_t n)  {

	std::vector<int> result;
	size_t numElements = std::min(n, vec.size());

	for (size_t i = 0; i < numElements; ++i) {
		result.push_back(vec[i]);
	}
	vec.erase(vec.begin(), vec.begin() + numElements);

	return result;
}

std::vector<int> jacobsort(std::vector<int> container) {
	std::vector<int> result;
	std::vector<int> buffer;

	for (unsigned int i = 0; container.size() > 0; i++) {
		buffer = getAndRemoveFirstN(container, jacobsthal(i));
		result.insert(result.end(), buffer.rbegin(), buffer.rend());
	}

	return(result);
}

std::vector<int> resolve(std::vector<int> container) {
	std::vector<int>	min_cont;
	std::vector<int>	max_cont;

	if (container.size() == 1)
		return (container);
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++) {
		if (it +1 == container.end()) {
			min_cont.push_back(*it);
			continue ;
		}
		if (*it < *(it+1)) {
			min_cont.push_back(*it);
			max_cont.push_back(*(it+1));
		} else {
			min_cont.push_back(*(it+1));
			max_cont.push_back(*it);
		}
		it++;
	}
	
	max_cont = resolve(max_cont);
	min_cont = jacobsort(min_cont);
	dichotomyInsert(max_cont, min_cont);

	return (max_cont);
}

//////////////////////////////////////////////////////////////////
//								DEQUE							//
//////////////////////////////////////////////////////////////////

void dichotomyInsert(std::deque<int>& dest, const std::deque<int>& src)  {
	for (size_t i = 0; i < src.size(); ++i) {
		std::deque<int>::iterator pos = std::lower_bound(dest.begin(), dest.end(), src[i]);
		dest.insert(pos, src[i]);
	}
}

std::deque<int> getAndRemoveFirstN(std::deque<int>& vec, size_t n)  {

	std::deque<int> result;
	size_t numElements = std::min(n, vec.size());

	for (size_t i = 0; i < numElements; ++i) {
		result.push_back(vec[i]);
	}
	vec.erase(vec.begin(), vec.begin() + numElements);

	return result;
}

std::deque<int> jacobsort(std::deque<int> container) {
	std::deque<int> result;
	std::deque<int> buffer;

	for (unsigned int i = 0; container.size() > 0; i++) {
		buffer = getAndRemoveFirstN(container, jacobsthal(i));
		result.insert(result.end(), buffer.rbegin(), buffer.rend());
	}

	return(result);
}

std::deque<int> resolve(std::deque<int> container) {
	std::deque<int>	min_cont;
	std::deque<int>	max_cont;

	if (container.size() == 1)
		return (container);
	for (std::deque<int>::iterator it = container.begin(); it != container.end(); it++) {
		if (it +1 == container.end()) {
			min_cont.push_back(*it);
			continue ;
		}
		if (*it < *(it+1)) {
			min_cont.push_back(*it);
			max_cont.push_back(*(it+1));
		} else {
			min_cont.push_back(*(it+1));
			max_cont.push_back(*it);
		}
		it++;
	}
	
	max_cont = resolve(max_cont);
	min_cont = jacobsort(min_cont);
	dichotomyInsert(max_cont, min_cont);

	return (max_cont);
}
