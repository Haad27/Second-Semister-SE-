#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number (0-100): ";
    
    try {
        cin >> number;
        
        // Validate input
        if (cin.fail()) {
            throw "Invalid input - please enter a number";
        }
        if (number < 0) {
            throw number;  // Throw the negative number
        }
        if (number > 100) {
            throw "Number too large";
        }
        
        cout << "You entered: " << number << endl;
    }
    catch (int num) {
        cout << "Error: Negative number (" <<num << ") not allowed!" << endl;
    }
    catch ( char e) {
        cout << "Error: " << e << endl;
    }
    catch (...) {
        cout << "Unknown error occurred" << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}