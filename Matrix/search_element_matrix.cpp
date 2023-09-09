/* Date: 24 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

void printMatrix(int mat[SIZE][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

bool search(int mat[SIZE][SIZE], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == element)
                return true;
        }
    }

    return false;
}

int main()
{
    int mat[SIZE][SIZE] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
    int n = 3;
    int element = 91;

    printMatrix(mat, n);
    bool res = searchelEmentMatrix(mat, n, element);

    if (res)
        cout << element << " is present in matrix." << endl;
    else
        cout << element << " is not present in matrix." << endl;

    return 0;
}