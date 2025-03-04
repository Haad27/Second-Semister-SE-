#include <iostream>
#include <string>
#include <vector>

using namespace std;

int* createArray(int size)
{
    int* arr = new int[size];
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
        cout << arr[i];
        if (i < size - 1)  // Add comma and space for all elements except the last
        {
            cout << ", ";
        }
    }
    cout << "]";
    return arr;
}

int main()
{
    int size;
    cout << "enter the number of size\n";
    cin >> size;
    
    int* array = createArray(size);
    cout << endl;
    
    // free the memory
    delete[] array;
    
    return 0;
}
