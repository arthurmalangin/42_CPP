#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>


RPN::RPN() {

}

RPN::RPN(const RPN& other) { 
	_stack = other._stack;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

RPN::~RPN() {
	// std::cout << "destructor call" << std::endl;
}

bool RPN::isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int RPN::applyOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                throw std::runtime_error("Error: division by zero");
            }
            return operand1 / operand2;
        default:
            throw std::runtime_error("Error: unknown operator");
    }
}

int RPN::evaluate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() == 1 && isOperator(token[0])) {
            if (_stack.size() < 2) {
                throw std::runtime_error("Error: invalid expression");
            }
            int operand2 = _stack.top();
            _stack.pop();
            int operand1 = _stack.top();
            _stack.pop();
            int result = applyOperation(token[0], operand1, operand2);
            _stack.push(result);
        } else {
            bool isNegative = token[0] == '-';
            size_t start = isNegative ? 1 : 0;
            for (size_t i = start; i < token.length(); ++i) {
                if (!std::isdigit(token[i])) {
                    throw std::runtime_error("Error: invalid number");
                }
            }
            int number = std::atoi(token.c_str());
            _stack.push(number);
        }
    }

    if (_stack.size() != 1) {
        throw std::runtime_error("Error: invalid expression");
    }

    return _stack.top();
}