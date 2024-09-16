// consoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "opFunctions.hpp"

using namespace std;

int main() {

    cout << "Calculator Console Application\n" << endl;

    // Choosing an operation
    char operation = selectOpFunction();

    cout << endl;

    // Operation happens
    opFunction();

    return 0;
}