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

void sortMatrix(int mat[SIZE][SIZE], int n)
{
    int temp[n * n];
    int ind = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[ind++] = mat[i][j];
        }
    }

    sort(temp, temp + ind); // sort 1d matrix
    ind = 0;                // reset index

    //  1d matrix to 2d matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = temp[ind++];
        }
    }
}

int main()
{
    int mat[SIZE][SIZE] = {{5, 4, 7},
                           {1, 3, 8},
                           {2, 9, 6}};
    int n = 3;

    cout << "Unsorted matrix:" << endl;
    printMatrix(mat, n);

    cout << "Sorted matrix:" << endl;
    sortMatrix(mat, n);
    printMatrix(mat, n);

    return 0;
}