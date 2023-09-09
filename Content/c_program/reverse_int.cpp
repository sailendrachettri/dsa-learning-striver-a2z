/* Date: 09 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseInt(int num)
{
    int temp = num;
    int res = 0;

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        res = res * 10 + lastDigit;
        temp = temp / 10;
    }

    return res;
}

int main()
{
    int num;
    num = 911;

    cout << num << endl;
    int res = reverseInt(num);
    cout << res << endl;

    return 0;
}