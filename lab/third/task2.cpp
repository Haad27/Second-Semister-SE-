#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // declare variables to take from user rows and col
    int row, col;
    cout << "enter the size of row\n";
    cin >> row;
    cout << "enter the size of col\n";
    cin >> col;

    // declareing 2D dynamic allocated array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    /// taking values from the user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter teh value of  rows " << i + 1 << " and of col " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }
    // printing the value of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    return 0;
}
