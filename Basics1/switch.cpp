/* Date:  - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Entar a number: ";
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "zero" << endl;
        break;
    case 10:
        cout << "one" << endl;
        break;
    case 20:
        cout << "two" << endl;
        break;
    case 30:
        cout << "three" << endl;

    default:
        cout << num << endl;
    }

    return 0;
}