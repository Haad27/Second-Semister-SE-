#include <iostream>
using namespace std;

#define SIZE 5
// th / is used to tell that the code is continued to net line as well
// easy way to remmeber is to make a function a define function use this same way as a function
#define MAX_VALUE(arr, size) ({ \
    int max = 0; \
    for(int i = 1; i < size; i++) { \
        if(arr[i] > max) \
            max = arr[i]; \
    } \
    max; \
})

int main() {
    int numbers[SIZE];
    
    // Get input from user
    cout << "Enter " << SIZE << " numbers: ";
    for(int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    
    // Find maximum using the macro
    int max = MAX_VALUE(numbers, SIZE);
    
    // Display result
    cout << "Maximum value is: " << max << endl;
    
    return 0;
}
