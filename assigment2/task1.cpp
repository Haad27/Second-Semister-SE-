#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to swap the values of two integers
void swapnumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    
    // Prompt the user to enter the value of x
    cout << "Enter value of x: \n";
    cin >> x;
    
    // Prompt the user to enter the value of y
    cout << "Enter value of y: \n";
    cin >> y;
    
    // Display the values before swapping
    cout << "Before swapping: \n";
    cout << "x = " << x << "   y = " << y << "\n";
    
    // Call the function to swap the values
    swapnumbers(&x, &y);
    
    // Display the values after swapping
    cout << "After swapping: \n";
    cout << "x = " << x << "   y = " << y << "\n";
    
    return 0;
}