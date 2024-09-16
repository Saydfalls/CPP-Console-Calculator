#include <iostream>
#include <limits>
#include <string>

#include "opFunctions.hpp"

static double forceDouble() {
    std::string input;
    double number;

    while (true) {
        std::cin >> input;

        // Check if the input is a valid decimal number using a manual check
        bool valid = true;
        bool hasDecimalPoint = false;

        for (size_t i = 0; i < input.length(); ++i) {
            if (input[i] == '.' && !hasDecimalPoint) {
                // Allow only one decimal point
                hasDecimalPoint = true;
            }
            else if (!isdigit(input[i])) {
                // If the character is not a digit, set valid to false
                valid = false;
                break;
            }
        }

        if (!valid) {
            std::cout << "Invalid input. Please enter a valid decimal number.\n";
        }
        else {
            // Convert the valid input string to a double
            number = stod(input);
            break;
        }

        // Clear the input buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return number;
}

void opFunction (char operation) {
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

char selectOpFunction () {
    char operation;
    bool correctInput = false;

    while (!correctInput) {
        std::cout << "Please enter the operation to perform. Format: + | - | * | / \n";

        std::cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            correctInput = true;
        }
        else {
            std::cout << "\nPlease enter a valid operation. Try again \n\n";
        }
    }

    return operation;
}