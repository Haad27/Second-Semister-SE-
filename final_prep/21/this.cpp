#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int start = 0) : count(start) {}  // Constructor with default value

    // Prefix ++ operator overload
    Counter& operator++() {
        ++count;
        return *this;  // Return reference to current object
    }

    // Display the count
    void show() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c(90);  // Create counter starting at 90
    
    ++c;  // Increment using overloaded operator
    c.show();  // Shows 91
    
    ++++c;  // Can chain increments
    c.show();  // Shows 93
    
    return 0;
}