#include <iostream>
using namespace std;

// Function definitions
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    cout << "Error: Division by zero!\n";
    return 0;
}

int main()
{
    int choice, num1, num2;
    int (*operation)(int, int); // Function pointer declaration

    cout << "Select operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Assign function pointer based on choice
    switch (choice)
    {
    case 1:
        operation = add;
        break;
    case 2:
        operation = subtract;
        break;
    case 3:
        operation = multiply;
        break;
    case 4:
        operation = divide;
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 1; // Exit program with an error
    }

    // Call the function using the pointer
    cout << "Result: " << operation(num1, num2) << endl;

    return 0;
}
