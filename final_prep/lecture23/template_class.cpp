#include <iostream>
#include <string>
using namespace std;

// Single-type class template
template <typename T>
class Box {
private:
    T value;
public:
    Box(T val) : value(val) {}
    void display() {
        cout << "Box value: " << value << endl;
    }
};

// Multi-type class template
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    void display() {
        cout << "Pair values: " << first << ", " << second << endl;
    }
};

int main() {
    Box<int> b(5);          // T = int
    b.display();

    Pair<string, int> p("Hello", 10);  // T1 = string, T2 = int
    p.display();

    return 0;
}
