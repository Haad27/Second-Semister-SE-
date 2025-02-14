#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //declare and ask user for row of both matrix
    int rowa, cola, rowb, colb;
    cout << "enter the size of row of  of first matrix\n";
    cin >> rowa;
    cout << "enter the size of col of first matrix\n";
    cin >> cola;
    cout << "enter the size of row of second matrix\n";
    cin >> rowb;
    cout << "enter the size of col of second matrix\n";
    cin >> colb;


    // verifiaction check to see if multiplication is possible
    if (cola!=rowb)
    {
       cout << "multiplication not possible\n";
       return 0;
    }
    
    //alloacting 2D array for 3 matrix first second and then the third matrix that will be teh result
    int **arr = new int *[rowa];
    for (int i = 0; i < rowa; i++)
    {

        arr[i] = new int[cola];
    }
    int **arrf = new int *[rowa];
    for (int i = 0; i < rowa; i++)
    {
        arrf[i] = new int[colb]();
    }
    int **arr1 = new int *[rowb];
    for (int i = 0; i < rowb; i++)
    {

        arr1[i] = new int[colb];
    }

     // twaking the value of both amtrix from the user
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < cola; j++)
        {
            cout << "enter teh value of  rows " << i + 1 << " and of col " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }

    cout << "now enter the data for second matrix\n";
    for (int i = 0; i < rowb; i++)
    {
        for (int j = 0; j < colb; j++)
        {
            cout << "enter teh value of  rows " << i + 1 << " and of col " << j + 1 << endl;
            cin >> arr1[i][j];
        }
    }
    // logic to multiply both matrixes
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < colb; j++)
        {
            for (int k = 0; k < cola; k++)
            {
                arrf[i][j] = arr[i][k] * arr1[k][j] + arrf[i][j];
            }
        }
    }


    //printing the final result
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < colb; j++)
        {
            cout << arrf[i][j] << " ";
        }
        cout << endl;
    }

    delete arr;
    delete arr1;
    delete arrf;
    return 0;
}
