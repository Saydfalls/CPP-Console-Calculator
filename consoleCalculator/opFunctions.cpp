#include "masterHeader.hpp"
#include "opFunctions.hpp"

inline void flush() {
    cin.clear();
    cin.sync();
}

static double forceDouble() {
    string input;
    double number;

    while (true) {

        // Read the entire line of input
        cin >> input;

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

char selectOpFunction() {
    char operation;
    bool correctInput = false;

    while (!correctInput) {
        cout << "Please enter the operation to perform. Format: + | - | * | / | q for exit \n";

        // Use std::getline to handle whitespace correctly
        string input;
        getline(std::cin, input);
        flush();  // Clear the input stream to avoid errors when reading next input

        // Read the first character from the input
        if (input.length() == 1) {
            operation = input[0];
            if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
                correctInput = true;
            } else if (operation == 'q' || operation == 'Q') {
                std::cout << "Exiting the program...\n";
                break;
            } else {
                cout << "\nPlease enter a valid operation. Try again \n\n";
            } 
        } else {
            cout << "\nPlease enter a single character operation. Try again \n\n";
        }
    }

    return operation;
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
