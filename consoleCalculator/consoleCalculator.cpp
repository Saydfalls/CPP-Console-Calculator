// consoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// consoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

void add() {
    cout << "";
}

void subtract() {
    cout << "";
}

void multiply() {
    cout << "";
}

void divide() {
    cout << "";
}

int main()
{

    std::cout << "Calculator Console Application\n" << endl;

    // Choosing an operation
    string operation;
    bool correctInput = false;

    while (!correctInput) {
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

        cin >> operation;

        if (operation == "a+b" || operation == "a-b" || operation == "a*b" || operation == "a/b") {
            correctInput = true;
        }
        else {
            cout << endl << "Please enter  a valid operation. Try again" << endl << endl;
        }
    }

    // Operation happens
    if (operation == "a+b") {
        add();
    }
    else if (operation == "a-b") {
        subtract();
    }
    else if (operation == "a*b") {
        multiply();
    }
    else {
        divide();
    }

}

