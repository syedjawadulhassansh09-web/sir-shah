#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Display instructions
    cout << "===========================\n";
    cout << "     C++ BASIC CALCULATOR  \n";
    cout << "===========================\n";
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << "---------------------------\n";

    // Perform calculation based on the operator
    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;

        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;

        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;

        default:
            // If the operator doesn't match any case above
            cout << "Error: Invalid operator! Please use +, -, *, or /." << endl;
            break;
    }

    cout << "---------------------------\n";
    return 0;
}