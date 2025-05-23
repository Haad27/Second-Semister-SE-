#include <iostream>
using namespace std;

template<class T>
class SimpleArray {
    T* arr;
    int size;
public:
    SimpleArray(int s) : size(s) {
        arr = new T[size];  // Creates array of type T
    }
    
    void set(int index, T value) {
        arr[index] = value;
    }
    
    void print() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    
    ~SimpleArray() {
        delete[] arr;
    }
};

int main() {
    // Create and use an int array
    SimpleArray<int> nums(3);
    nums.set(0, 10);
    nums.set(1, 20);
    nums.print();  // Output: 10 20 0
    
    // Create and use a string array
    SimpleArray<string> words(2);
    words.set(0, "Hello");
    words.set(1, "World");
    words.print();  // Output: Hello World
    
    return 0;
}