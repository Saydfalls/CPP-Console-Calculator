// consoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "masterHeader.hpp"
#include "opFunctions.hpp"

int main() {

    cout << "Console Calculator Application\n\n";

    // Choosing an operation
    char operation = selectOpFunction();

    cout << "\n";

    // Operation happens
    opFunction(operation);

    return 0;
}