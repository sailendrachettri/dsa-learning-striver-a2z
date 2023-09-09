/* Date: 07 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getPower(int base, int exp)
{
    int res = base;
    for (int i = 1; i < exp; i++)
    {
        res = res * base;
    }

    return res;
}

int main()
{
    int base, exp;
    base = 3;
    exp = 3;

    int res = getPower(base, exp);
    cout << base << " raised to the " << exp << " is " << res << endl;

    return 0;
}