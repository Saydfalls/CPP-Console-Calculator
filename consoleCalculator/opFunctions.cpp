#include <iostream>
#include "opFunctions.hpp"

using namespace std;

void opFunction (char operation) {
    double firstNum;
    cout << "Enter first number: " << endl;
    cin >> firstNum;
    cout << endl;

    double secondNum;
    cout << "Enter second number: " << endl;
    cin >> secondNum;
    cout << endl;

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