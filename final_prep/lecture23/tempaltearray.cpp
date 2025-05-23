
#include <iostream>
using namespace std;

template<typename T>
void printArray(const T array[], int count) {
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main() {
    const int aCount = 5, bCount = 7, cCount = 6;
    
    int a[aCount] = {1, 2, 3, 4, 5};
    double b[bCount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    char c[cCount] = "HELLO"; // 6th position for null

    cout << "Array a contains:\n";
    printArray(a, aCount);

    cout << "Array b contains:\n";
    printArray(b, bCount);

    cout << "Array c contains:\n";
    printArray(c, cCount);

    return 0;
}