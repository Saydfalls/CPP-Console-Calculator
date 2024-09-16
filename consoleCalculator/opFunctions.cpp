#include <iostream>
#include <limits>
#include <string>

#include "opFunctions.hpp"

using namespace std;

static double forceDouble() {
    string input;
    double number;

    while (true) {
        cin >> input;

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
            cout << "Invalid input. Please enter a valid decimal number." << endl;
        }
        else {
            // Convert the valid input string to a double
            number = stod(input);
            break;
        }

        // Clear the input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

void opFunction (char operation) {
    // First operand
    cout << "Enter first number: " << endl;
    double firstNum = forceDouble();

    cout << endl;

    // Second operand
    cout << "Enter second number: " << endl;
    double secondNum = forceDouble();

    cout << endl;

    // Expression results
    if (operation == '+') {
        cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum;
    }
    else if (operation == '-') {
        cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum;
    }
    else if (operation == '*') {
        cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum;
    }
    else {
        cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum;
    }
}

char selectOpFunction () {
    char operation;
    bool correctInput = false;

    while (!correctInput) {
        cout << "Please enter the operation to perform. Format: + | - | * | /" << endl;

        cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            correctInput = true;
        }
        else {
            cout << endl << "Please enter a valid operation. Try again" << endl << endl;
        }
    }

    return operation;
}