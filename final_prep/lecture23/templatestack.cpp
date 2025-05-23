#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
    vector<T> items;
    int maxSize;
public:
    Stack(int size) : maxSize(size) {}
    
    bool push(T val) {
        if (items.size() < maxSize) {
            items.push_back(val);
            return true;
        }
        return false;
    }
    
    bool pop(T &val) {
        if (!items.empty()) {
            val = items.back();
            items.pop_back();
            return true;
        }
        return false;
    }
};

int main() {
    Stack<double> s(3);
    double x = 1.1;
    
    cout << "Pushing: ";
    while (s.push(x)) {
        cout << x << " ";
        x += 1.1;
    }
    
    cout << "\nPopping: ";
    while (s.pop(x)) {
        cout << x << " ";
    }
    
    return 0;
}