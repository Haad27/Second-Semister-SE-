#include <iostream>
#include <string>
using namespace std;

int main() {
    int numerator, denominator;
    double result = 0;

    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;

    try {
        // Check for division by zero
        if (denominator == 0)
            throw 0;  // Throw int
        
        // Check for negative values
        if (numerator < 0 || denominator < 0)
            throw 'N';  // Throw char
        
        // Check for large values
        if (numerator > 1000 || denominator > 1000)
            throw string("Values too large");  // Throw string
        
        result = static_cast<double>(numerator) / denominator;
    }
    catch (int ex) {
        cout << "Error: Division by zero!" << endl;
    }
    catch (char ex) {
        cout << "Error: Negative values not allowed!" << endl;
    }
    catch (string ex) {
        cout << "Error: " << ex << endl;
    }

    cout << "Result: " << result << endl;
    return 0;
}