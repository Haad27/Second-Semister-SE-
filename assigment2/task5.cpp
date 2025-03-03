#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
int row;
int col;
cout  << "Enter the number of rows: ";
cin >> row;
    cout << "Enter the number of columns: ";
        cin >> col;

int **arr = new int * [row];
for (int i = 0; i < row; i++)
{
    arr[i] = new int[col];
}

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << "Enter the element at position " << i << " " << j << ": ";
        cin >> arr[i][j];
    }
    
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

  
    return 0;
}
