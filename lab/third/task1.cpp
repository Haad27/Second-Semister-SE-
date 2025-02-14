#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //declare variable
    int value;
    cout << "enter the size of array teh elemenst you want in array\n";
    cin >> value;

    //dynamicallly allocated 1D array
    int *arr = new int[value];
    int sum = 0;

    //tsking value from user and summimg all the values at the same time
    for (int i = 0; i < value; i++)
    {
        cout << "enter the " << i + 1 << " value  :";
        cin >> arr[i];
        sum = sum + arr[i];
        cout << endl;
    }
    //showing the results
    for (int i = 0; i < value; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "sum od all numbers are == " << sum;

    delete arr;
    return 0;
}
