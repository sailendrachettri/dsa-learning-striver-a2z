/* Date: 12 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool intPalindrome(int num)
{
    int temp = num;
    int rev = 0;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    return rev == num;
}

int main()
{
    int num = 911;

    bool res = intPalindrome(num);
    cout << res << endl;

    return 0;
}