/* Date: 04 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int space = n; space >= i; space--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == j || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}