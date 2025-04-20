#include <iostream>
using namespace std;

class test {
public:
    int value;

    test(int v ) {
        value = v;
    }

    // Overload the + operator
    test operator+(test obj) {
        return test(value + obj.value);
    }
};

int main() {
    test a(5);
    test b(45);
    test c = a + b;  // This uses our overloaded + operator
    cout << "Sum: " << c.value << endl;
    return 0;
}
