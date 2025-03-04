#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to reverse the elements of an array
void reversearray(int *arr, int size) {
    int start = 0;
    int end = size - 1;
    
    // Swap elements from start to end until the middle of the array is reached
    while (start < end) {  
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int size = 5; // Size of the array
    int *arr = new int[size]; // Dynamically allocate an array of given size
    
    cout << "Enter 5 values:" << endl;
    // Input elements into the array
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Original array is: ";
    // Output the original array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse the array
    reversearray(arr, size);
    
    cout << "Reversed array is: ";
    // Output the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Free the dynamically allocated memory
    delete[] arr;
    
    return 0;
}