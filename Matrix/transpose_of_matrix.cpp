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
        cout << endl;
    }
    cout << endl;
}

void getTranspose(int mat[SIZE][SIZE], int n)
{
    int copy[SIZE][SIZE] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            copy[i][j] = mat[i][j];
        }
    }

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = copy[j][i];
        }
    }

    cout << endl;
}

int main()
{
    int n = 3;
    int matrix[SIZE][SIZE] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};
    printMatrix(matrix, n);
    getTranspose(matrix, n);
    printMatrix(matrix, n);

    return 0;
}