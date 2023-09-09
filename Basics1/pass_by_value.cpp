/* Date: 11 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapVal(int, int);

int main()
{
    int val1 = 2;
    int val2 = 4;

    cout << "Val1: " << val1 << endl;
    cout << "Val2: " << val2 << endl;
    swapVal(val1, val2);
    cout << "Val1: " << val1 << endl;
    cout << "Val2: " << val2 << endl;

    return 0;
}

void swapVal(int val1, int val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}