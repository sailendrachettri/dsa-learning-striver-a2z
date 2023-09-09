/* Date: 09 - 08 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 15;
    int num2 = 51;

    if (num1 == num2)
    {
        cout << "true" << endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " is lesser." << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}