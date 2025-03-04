#include <iostream>
using namespace std;

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { 
    if (b != 0) 
        return a / b; 
    cout << "Error: Division by zero!\n"; 
    return 0; 
}

int main() {
    int num1, num2;
    char op;

    // Array of function pointers
    int (*operations[256])(int, int) = {}; // Initialize all elements to nullptr
    operations['+'] = add;       // Assign add function to '+'
    operations['-'] = subtract;  // Assign subtract function to '-'
    operations['*'] = multiply;  // Assign multiply function to '*'
    operations['/'] = divide;    // Assign divide function to '/'

    // Prompt user for input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Prompt user for an operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Check if the operator is valid and call the corresponding function
    if (operations[op]) {
        cout << "Result: " << operations[op](num1, num2) << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}