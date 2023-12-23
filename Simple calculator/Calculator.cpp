#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input
    cout << "Welcome to the Simple Calculator by Nikhil!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation entered." << endl;
            return 1; // Exit with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
