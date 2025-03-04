#include <iostream>
using namespace std;

void findMinMax(int *arr, int size, int *min, int *max)
{
    // Initialize min and max with first element
    *min = *max = arr[0];
    
    // Traverse array starting from second element
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    // Create dynamic array
    int *arr = new int[size];
    
    // Input array elements
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    // Variables to store min and max
    int min, max;
    
    // Call function with address of min and max
    findMinMax(arr, size, &min, &max);
    
    // Print results
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    
    // Free allocated memory
    delete[] arr;
    
    return 0;
}
