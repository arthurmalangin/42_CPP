#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <cstdlib>
# include <cerrno>
# include <ctime>


std::vector<int> resolve(std::vector<int> container);
std::deque<int> resolve(std::deque<int> container);

int jacobsthal(unsigned int n);


#endif