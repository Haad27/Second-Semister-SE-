#include <iostream>
using namespace std;

int main() {
    int n;
    int* arr;

    // Get the size of array from user
    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocate memory
    arr = new int[n];

    // Input values into array
    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print array in reverse order
    cout << "\nArray in reverse order: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}
