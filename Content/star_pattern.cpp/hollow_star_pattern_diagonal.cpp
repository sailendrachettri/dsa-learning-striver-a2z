/* Date: 30 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // hollow square start pattern with diagonals
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1 || i == j || i == n) ||
                (j == 1 || j == n - i + 1 || j == n))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}