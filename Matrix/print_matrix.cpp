/* Date: 24 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // int matrix[3][3] = {{11, 15, 19},
    //                     {14, 20, 21},
    //                     {30, 34, 43}};
    // printMatrix(matrix);

    // SEARCH ELEMENT IN MATRIX
    /*
    int search = 14;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == search)
            {
                cout << search << " is present in the matrix." << endl;
                break;
            }
        }
    }
    */

    // PRINT DIAGONAL ELEMENT - Principal Diagonal: 11, 20, 43
    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    */

    // PRINT DIAGONAL ELEMENT - Secondary Diagonal: 4, 7, 2, 5
    int n = 4;
    int matrix2[4][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {1, 2, 3, 4},
                         {5, 6, 7, 8}};
    int a = 0;
    int b = n - 1; // b= n-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == a && b == j)
            {
                cout << matrix2[i][j] << " ";
                a++, b--;
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}