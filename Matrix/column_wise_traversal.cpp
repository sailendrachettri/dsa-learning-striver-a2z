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
            cout << mat[j][i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int mat[SIZE][SIZE] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
    int n = 3;

    printMatrix(mat, n);

    return 0;
}