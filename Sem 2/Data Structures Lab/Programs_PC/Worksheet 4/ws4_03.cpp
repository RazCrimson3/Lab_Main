#include <iostream>
#include "sparseMatrix.h"

using namespace std;

int main()
{
    int r, c;
    cout << "\nEnter the no. of rows and columns of A : ";
    cin >> r >> c;
    if (r < 1 || c < 1)
    {
        cout << "Error in size!!";
        exit(0);
    }
    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
        arr[i] = new int[c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\nEnter the elements of A at["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j];
        }
    }
    sparseMatrix a(arr, r, c);

    cout << "\nEnter the no. of rows and columns of B : ";
    cin >> r >> c;
    if (r < 1 || c < 1)
    {
        cout << "Error in size!!";
        exit(0);
    }
    arr = new int *[r];
    for (int i = 0; i < r; i++)
        arr[i] = new int[c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\nEnter the elements of B at["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j];
        }
    }
    sparseMatrix b(arr, r, c);
    a.twinAdd(b);
    return 0;

}