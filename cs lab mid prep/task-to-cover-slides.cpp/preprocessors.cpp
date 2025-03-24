#include <iostream>
using namespace std;

// Using # to convert argument to string
#define HELLO(x) cout << "Hello, " #x << endl;

// Using ## to concatenate tokens
#define TOKENCONCAT(x, y) x##y

int main() {
    // Example of # operator
    HELLO(John) // Expands to: cout << "Hello, " "John" << endl;

    // Example of ## operator
    int OK = 100;
    cout << "Value of OK: " << TOKENCONCAT(O, K) << endl; // Expands to OK

    return 0;
}
