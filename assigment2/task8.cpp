#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to swap the values of two integers
void swapValue(int &a, int &b)
{
    int temp = a; // Store the value of 'a' in 'temp'
    a = b;       // Assign the value of 'b' to 'a'
    b = temp;    // Assign the value of 'temp' (original 'a') to 'b'
}

int main()
{
    int x, y;

    // Prompt user to enter the value of x
    cout << "Enter value of x: ";
    cin >> x;

    // Prompt user to enter the value of y
    cout << "Enter value of y: ";
    cin >> y;

    // Display values before swapping
    cout << "Before swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Call the swap function
    swapValue(x, y);

    // Display values after swapping
    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}