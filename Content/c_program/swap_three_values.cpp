/* Date: 01 - 09 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;

    num1 = num1 + num2 + num3; // 1 + 2 + 3 = 6

    num2 = num1 - (num2 + num3); // 6 - (2 + 3) = 1
    num3 = num1 - (num2 + num3); // 6 - (1 + 3) = 2
    num1 = num1 - (num2 + num3); // 6 - (1 + 2) = 3

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    return 0;
}