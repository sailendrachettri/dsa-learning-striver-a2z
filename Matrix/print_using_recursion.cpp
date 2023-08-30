/* Date: 24 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

void printUsingResuction(int mat[SIZE][SIZE], int i, int j, int n)
{
    // base case
    if (i == n - 1 and j == n - 1)
    {
        cout << mat[i][j] << endl;
        return;
    }
    cout << mat[i][j] << " ";

    if (j < n - 1)
    {
        printUsingResuction(mat, i, j + 1, n);
    }
    else if (i < n - 1)
    {
        printUsingResuction(mat, i + 1, 0, n);
    }
}

int main()
{
    int mat[SIZE][SIZE] = {{1, 3, 2}, {4, 6, 5}, {7, 9, 8}};
    int n = 3;

    printUsingResuction(mat, 0, 0, n);

    return 0;
}