/* Date: 13 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printRecursion(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << "N: " << n;
    printRecursion(n - 1);
    cout << endl
         << n << " ";
}

int main()
{
    int n = 10;
    printRecursion(n);

    return 0;
}