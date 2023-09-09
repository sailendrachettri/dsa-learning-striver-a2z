/* Date: 29 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int space = n; space > i; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}