#include <iostream>
#include <limits>
#include <string>
#include <cstdio>  // Use <cstdio> in C++ instead of <stdio.h>

#include "opFunctions.hpp"

static double forceDouble() {
    std::string input;
    double number;

    while (true) {

        // Read the entire line of input
        std::cin >> input;

        // Convert the input string to a double
        char* end;
        number = std::strtod(input.c_str(), &end);

        // Check if conversion was successful and there are no extra characters
        if (*end == '\0' && end != input.c_str()) {
            // Valid number input
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid decimal number." << std::endl;
        }
    }

    return number;
}

void opFunction(char operation) {
    // First operand
    std::cout << "Enter first number: \n";
    double firstNum = forceDouble();

    std::cout << "\n";

    // Second operand
    std::cout << "Enter second number: \n";
    double secondNum = forceDouble();

    std::cout << "\n";

    // Expression results
    if (operation == '+') {
        std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum;
    }
    else if (operation == '-') {
        std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum;
    }
    else if (operation == '*') {
        std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum;
    }
    else {
        std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum;
    }
}

char selectOpFunction() {
    char operation;
    bool correctInput = false;

    while (!correctInput) {
        std::cout << "Please enter the operation to perform. Format: + | - | * | / \n";

        // Use std::getline to handle whitespace correctly
        std::string input;
        std::getline(std::cin, input);

        // Read the first character from the input
        if (input.length() == 1) {
            operation = input[0];
            if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
                correctInput = true;
            }
            else {
                std::cout << "\nPlease enter a valid operation. Try again \n\n";
            }
        }
        else {
            std::cout << "\nPlease enter a single character operation. Try again \n\n";
        }
    }

    return operation;
}
