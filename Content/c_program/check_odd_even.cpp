/* Date: 08 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkOddEven(int n)
{
    if (n & 1)
        return false;

    return true;
}

int main()
{
    int num;
    cin >> num;

    bool res = checkOddEven(num);

    cout << num << " is an " << (res ? " Even" : " Odd") << endl;

    return 0;
}