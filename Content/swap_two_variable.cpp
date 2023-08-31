/* Date: 31 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num1 = 10;
    // int num2 = 20;

    // int temp = num1;
    // num1 = num2;
    // num2 = temp;

    // cout << "num1: " << num1 << endl;
    // cout << "num2: " << num2 << endl;

    /* int num1 = 4;
    int num2 = 5;

    swap(num1, num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    */

    int num1 = 2;
    int num2 = 3;

    num1 = num1 + num2; // 2 + 3 = 5
    num2 = num1 - num2; // 5 - 3 = 2
    num1 = num1 - num2; // 5 - 2 = 3

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}