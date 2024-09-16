#include <iostream>
#include <limits>
#include "opFunctions.hpp"

using namespace std;

static double forceDouble() {
    double number;

    while (true) {
        cin >> number;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else {
            break;
        }
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