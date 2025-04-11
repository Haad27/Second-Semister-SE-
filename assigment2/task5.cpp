#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int row;
    int col;
  
    
    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> row;
    
    // Prompt the user to enter the number of columns
    cout << "Enter the number of columns: ";
    cin >> col;

    // Dynamically allocate a 2D array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input elements into the 2D array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the element at position " << i << " " << j << ": ";
            cin >> arr[i][j];
        }
    }

    // Output the elements of the 2D array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}