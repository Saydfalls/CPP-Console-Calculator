// consoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "opFunctions.hpp"

int main() {

    std::cout << "Console Calculator Application\n\n";

    // Choosing an operation
    char operation = selectOpFunction();

    std::cout << "\n";

    // Operation happens
    opFunction(operation);

    return 0;
}