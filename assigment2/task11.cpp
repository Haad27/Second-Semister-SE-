#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merger(int *arr1, int size1, int *arr2, int size2, int *final) {
    // Copy first array
    for (int i = 0; i < size1; i++) {
        final[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < size2; i++) {
        final[i + size1] = arr2[i];
    }
}

int main() {
    int size1 = 3;  // First array size
    int size2 = 4;  // Second array size
    
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];
    int *final = new int[size1 + size2];  

    // Initialize first array
    for (int i = 0; i < size1; i++) {
        arr1[i] = i + 1;
    }
    
    // Initialize second array
    for (int i = 0; i < size2; i++) {
        arr2[i] = i + 5;
    }
    
    // Print first array
    cout << "First array before merging: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    // Print second array
    cout << "Second array before merging: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
   
    // Merge arrays
    merger(arr1, size1, arr2, size2, final);
    
    // Print merged array
    cout << "Final array after merging: ";
    for (int i = 0; i < (size1 + size2); i++) {
        cout << final[i] << " ";
    }
    cout << endl;
    
    // Clean up allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] final;
    
    return 0;
}
