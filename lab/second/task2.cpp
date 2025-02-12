#include <iostream>
#include <string>
#include <vector>

using namespace std;

// defining preprocessors
#define MAX(a, b) (a > b ? a : b)
#define SIZE 10
#define MIN(a, b) (a < b ? a : b)

int main()
{

    //  intial vairables
    int miminum = 0;
    int maximum = 0;
    int arr[10];

    cout << "enter the 10 elements\n";

    // taking in 10 elements and storing them in a array
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

   for (int i = 0; i < SIZE - 1; i++)  
{
    for (int j = 0; j < SIZE - i - 1; j++)  
    {
        if (arr[j] > arr[j + 1])  
        {
            // Swap elements
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

    // using two loops to check which is maximum
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            maximum = MAX(arr[i], arr[j]);
        }
    }

    // using two loops to check which is minimum

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            miminum = MIN(arr[i], arr[j]);
        }
    }

    cout << "the maximum value is " << maximum << endl;
    cout << "the minimum value is " << miminum << endl;

    return 0;
}
